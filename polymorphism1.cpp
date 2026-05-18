#include <iostream>
using namespace std;
//多态分为静态多态和动态多态
//静态多态：函数重载和运算符重载属于静态多态，复用函数名
//动态多态：派生类和虚函数实现运行时多态
//区别：静态多态的函数地址早绑定，在编译阶段确定函数地址
//动态多态的函数地址晚绑定，在运行阶段确定函数地址

//多态
//动物类
class animal{
    public:
    //虚函数
    virtual void speak(){
        cout << "animal is speaking" << endl;
    }
};
//猫类
class cat:public animal{
    public:
    //重写  函数名称，函数返回值，参数列表要完全相同
    void speak(){
        cout << "cat is speaking" << endl;
    }
};
//狗类
class dog:public animal{
    public:
    void speak(){
        cout << "dog is speaking" << endl;
    }
};
//执行说话的函数
//地址早绑定，在编译阶段就确定了函数地址
//如果想执行让猫说话，这个地址就不能早绑定，需要在运行阶段绑定，地址晚绑定

//动态多态满足条件
//1.有继承关系
//2.子类要重写父类的虚函数

//动态多态的使用
//父类的指针或者引用 执行子类对象
void dospeak(animal &animal){
    animal.speak();
}
void test01(){
    cat cat;
    dospeak(cat);
    dog dog;
    dospeak(dog);
}
int main()
{
    test01();

    return 0;
}