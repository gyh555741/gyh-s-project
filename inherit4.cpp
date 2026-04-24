#include <iostream>
using namespace std;
//继承中同名成员处理方式
class base{
    public:
    base(){
        m_a=10;
    }
    void func(){
        cout << "base的func函数调用" << endl;
    }
    int m_a;
};
class son:public base{
    public:
    son(){
        m_a=20;
    }
    void  func(){
        cout << "son的func函数调用" << endl;
    }
    int m_a;
};
//同名成员属性
void test01(){
    son s;
    cout << "son下的s.m_a = " << s.m_a << endl;
    //如果需要通过子类成员访问到父类中的同名成员需要加作用域
    cout << "base下的s.m_a = " << s.base::m_a << endl;
}
//同名成员函数
void test02(){
    son x;
    x.func();//直接调用的是子类的同名成员
    x.base::func();//通过作用域调用父类的同名成员
    //如果子类中出现和父类同名的成员函数，子类的同名成员函数会隐藏掉父类中所有的同名成员函数
    //如果想访问父类中的同名成员函数，需要通过作用域来调用
}
int main(){
    test01();
    test02();

    return 0;
}