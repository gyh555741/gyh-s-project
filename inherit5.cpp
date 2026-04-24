#include <iostream>
using namespace std;
//继承同名静态成员
class base{
    public:
    static int m_a;
    static void func(){
        cout << "base的func静态成员函数调用" << endl;
    } 
};
int base::m_a=100;//静态成员属性类内声明，类外初始化
class son:public base{
    public:
    static int m_a;
    static void func(){
        cout << "son的func静态成员函数调用" << endl;
    }
};
int son::m_a=200;
//同名静态成员属性
void test01(){
    son s;
    //通过对象访问
    cout << "son下的m_a = " << s.m_a << endl;
    cout << "base下的m_a = " << s.base::m_a << endl;
    //通过类名访问
    cout << "son下的m_a = " << son::m_a << endl;
    cout << "base下的m_a = " << son::base::m_a << endl;
    //也可以这样写
    cout << "base下的m_a = " << base::m_a << endl; 
}
//同名静态成员函数
void test02(){
    son s1;
    s1.func();
    s1.base::func();
    son::base::func();
    base::func();
}
int main()
{
    test01();
    test02();

    return 0;
}