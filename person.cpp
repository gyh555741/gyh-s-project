#include <iostream>
using namespace std;
#include <string>
//访问权限
//公共权限public，成员     类内可以访问，类外也可以访问
//保护权限protected，成员  类内可以访问，类外不能访问(儿子可以访问父亲的保护内容)
//私有权限private，成员    类内可以访问，类外不能访问(儿子不能访问父亲的私有内容)
//struct默认权限是公共public
//class默认权限是私有private
class person{
public:
    string m_name;
protected:
    string m_car;
private:
    int m_password;
public:
    void func(){
        m_name="许辉";
        m_car="帕拉梅拉";
        m_password=1245678;
    }
};
int main()
{
    person p1;
    p1.m_name="抓零";
    //p1.m_car="梅赛德斯";       保护权限在类外不能访问
    //p1.m_password=1234;       私有权限在类外不能访问

    system("pause");

    return 0;
}