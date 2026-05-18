#include <iostream>
using namespace std;
//多继承语法
class base1{
    public:
    base1(){
        m_a=10;
    }
    int m_a;
};
class base2{
    public:
    base2(){
        m_a=20;
        m_b=30;
    }
    int m_a;
    int m_b;
};
class son:public base1 , public base2{
    public:
    son(){
        m_c=40;
    }
    int m_c;
};
void test01(){
    son s;
    cout << "base1的m_a = " << s.base1::m_a << endl;
    cout << "base2的m_a = " << s.base2::m_a << endl;
    cout << "base2的m_b = " << s.base2::m_b << endl;
    cout << "son的m_c = " << s.m_c << endl;
    cout << "size of son = " << sizeof(son) << endl;
}
int main()
{
    test01();

    return 0;
}