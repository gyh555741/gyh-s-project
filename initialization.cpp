#include <iostream>
using namespace std;
class person1{
    public:
    //传统初始化操作
    person1(int a,int b,int c){
        m_a=a;
        m_b=b;
        m_c=c;
    }
    int m_a;
    int m_b;
    int m_c;
};
class person2{
    public:
    //初始化列表初始化属性
    person2():m_a(10),m_b(20),m_c(30){

    }
    int m_a;
    int m_b;
    int m_c;
};
class person3{
    public:
    person3(int a,int b,int c):m_a(a),m_b(b),m_c(c){
    
    }
    int m_a;
    int m_b;
    int m_c;
};
void test01(){
    person1 p(10,20,30);
    cout << "m_a=" << p.m_a << endl;
    cout << "m_b=" << p.m_b << endl;
    cout << "m_c=" << p.m_c << endl;
    cout << endl;
}
void test02(){
    
    person2 p;
    cout << "m_a=" << p.m_a << endl;
    cout << "m_b=" << p.m_b << endl;
    cout << "m_c=" << p.m_c << endl;
    cout << endl;
}
void test03(){
    person3 p(30,20,10);
    cout << "m_a=" << p.m_a << endl;
    cout << "m_b=" << p.m_b << endl;
    cout << "m_c=" << p.m_c << endl;
}
int main()
{
    test01();
    test02();
    test03();

    return 0;
}