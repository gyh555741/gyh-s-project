#include <iostream>
using namespace std;
//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量
//静态成员函数也有访问权限
class person{
    public:
    //静态成员函数
    static void func(){
        m_a=200;//静态成员函数可以访问静态成员变量
        //m_b=300;    不能访问非静态成员变量，不信你试，因为无法区分是哪个对象的
        cout << "static void func的调用" << endl;
    }
    static int m_a;//静态成员变量
    int m_b;
};
int person::m_a=100;
void test01(){
    //1.通过对象访问
    person p;
    p.func();
    //2.通过类名访问
    person::func();
    cout << person::m_a << endl;
}
int main()
{
    test01();

    return 0;
}