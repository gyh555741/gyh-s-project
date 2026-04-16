#include <iostream>
using namespace std;
//成员变量和成员函数是分开存储的
class person{

};
class person1{
    int m_a;//非静态成员变量  属于类的对象上
};
class person2{
    int m_a;//非静态成员变量  属于类的对象上
    static int m_b;//静态成员变量  不属于类的对象上
};
class person3{
    int m_a;//非静态成员变量  属于类的对象上
    static int m_b;//静态成员变量  不属于类的对象上
    void func(){}//非静态成员函数  不属于类的对象上
};
class person4{
    int m_a;//非静态成员变量  属于类的对象上
    static int m_b;//静态成员变量  不属于类的对象上
    void func(){}//非静态成员函数  不属于类的对象上
    static void func1(){}//静态成员函数  不属于类的对象上
};
void test01(){
    person p;
    //空对象占用内存空间为1
    //c++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
    //每个空对象也应该有一个独一无二的内存地址
    cout << "size of p = " << sizeof(p) << endl;
}
void test02(){
    person1 p1;
    cout << "size of p1 = " << sizeof(p1) << endl;
}
void test03(){
    person2 p2;
    cout << "size of p2 = " << sizeof(p2) << endl;
}
void test04(){
    person3 p3;
    cout << "size of p3 = " << sizeof(p3) << endl;
}
void test05(){
    person4 p4;
    cout << "size of p4 = " << sizeof(p4) << endl;
}
int main()
{
    test01();
    test02();
    test03();
    test04();
    test05();

    return 0;
}