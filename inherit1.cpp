#include <iostream>
using namespace std;
//继承方式
//公共继承
class base{
    public:
    int m_a;
    protected:
    int m_b;
    private:
    int m_c;
};
class son1:public base{
    public:
    void func(){
        m_a=10;//父类中公共权限成员，到子类中仍然为公共权限
        m_b=20;//父类中保护权限成员，到子类中依然为保护权限,类内可以访问，类外不能访问
        //m_c=30;   //父类中私有权限成员，到子类中不可访问
    }
};
void test01(){
    son1 p1;
    p1.m_a=100;
    //p1.m_b=200;   //保护权限,类内可以访问，类外不能访问
}
class son2:protected base{
    protected:
    void func(){
        m_a=100;//父类中公共权限成员，到子类中变为保护权限 
        m_b=200;//父类中保护权限成员，到子类中为保护权限,类内可以访问，类外不能访问
        //m_c=300; //父类中私有权限成员，到子类中不可访问
    }
};
void test02(){
    son2 p2;
    //p2.m_a=1000;      //m_a变为了保护权限，子类中不能访问
    //p2.m_b=2000;      //m_b仍为保护权限，子类中不能访问
}
class son3:private base{
    private:
    void func(){
        m_a=1000;//父类中公共权限成员，到子类中变为私有权限
        m_b=2000;//父类中保护权限成员，到子类中变为私有权限
        //m_c=3000; //父类中私有权限成员，到子类中不可访问
    }
};
void test03(){
    son3 p3;
    //p3.m_a=10000;     //m_a变为了私有权限，子类中不能访问
    //p3.m_b=20000;     //m_b变为了私有权限，子类中不能访问
}
int main()
{
    test01();
    test02();
    test03();

    return 0;
}