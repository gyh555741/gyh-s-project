#include <iostream>
using namespace std;
//运算符重载:对已有的运算法进行重新定义，以实现新的功能
//加号运算符重载
class person{
    public:
    //成员函数重载+号
    person operator+(person &p){
        person temp;
        temp.m_a = this->m_a + p.m_a;
        temp.m_b = this->m_b + p.m_b;
        return temp;
    }
    int m_a;
    int m_b;
};
//全局函数重载
person operstor(person &p1, person &p2){
    person temp;
    temp.m_a = p1.m_a + p2.m_a;
    temp.m_b = p1.m_b + p2.m_b;
    return temp;
}
//全局函数重载的另一版本
person operator+(person &p1,int x){
    person temp;
    temp.m_a = p1.m_a + x;
    temp.m_b = p1.m_b + x;
    return temp;
}
void test01(){
    person p1;
    p1.m_a = 10;
    p1.m_b = 10;
    person p2;
    p2.m_a = 20;
    p2.m_b = 20;
    person p3 = p1 + p2;
    cout << "m_a = " << p3.m_a << endl;
    cout << "m_b = " << p3.m_b << endl;
    person p4;
    p4.m_a = 30;
    p4.m_b = 30;
    person p5 = p4 + 50;
    cout << "m_a = " << p5.m_a << endl;
    cout << "m_b = " << p5.m_b << endl;
}
int main()
{
    test01();

    return 0;
}