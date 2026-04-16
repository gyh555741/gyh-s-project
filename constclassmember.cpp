#include <iostream>
using namespace std;
//声明对象前加const称该对象叫常对象
//常对象只能调用常函数
class person{
    //this指针的本质是指针常量，指针的指向是不可以修改的
    //const person* const this;
    //在成员函数后面加const修饰的是this指向,让指针指向的值也不可以修改
    public:
    person(){
        m_a=10;
        m_b=10;
    }
    void showperson() const{//加const变成常函数
        //this->m_a=10;   
        //this=NULL;     this指针不可以修改指针的指向
        this->m_b=100;
    }
    void func(){

    }
    int m_a;
    mutable int m_b;//特殊变量，即使在常函数中也可以修改这个值，加关键字mutable
};
void test01(){
    person p;
    p.showperson();
}
//常对象
void test02(){
    const person p;//前面加上const变成常对象   //因为常对象不能修改变量，所以需要先在class里面用构造函数赋值
    //p.m_a=100;//常对象下不可以修改
    p.m_b=100;//m_b是特殊的值，即使在常对象下也可以修改
    cout << "m_b = " << p.m_b << endl;
    //常对象只能调用常函数
    p.showperson();//这个可以调用
    //p.func();    常对象就不能调用普通成员函数，因为普通成员函数可以修改属性
}
int main()
{
    test01();
    test02();

    return 0;
}