#include <iostream>
using namespace std;
//静态成员变量
class person{
    public:

    //所有对象都共享一份数据
    //编译阶段就分配内存
    //类内声明，类外初始化
    static int m_A;
    //静态成员变量也有访问权限
    private:
    static int m_B;
};
int person::m_A=100;
int person::m_B=300;
void test01(){
    person p;
    cout << p.m_A << endl;
    person p2;
    p2.m_A=200;//所有成员共享一份数据，这里更改了，所以m_A变成200了
    cout << p.m_A << endl;
}
void test02(){
    //静态成员不属于某个对象上，所有对象都共享同一份数据
    //因此静态成员变量有两种访问方式

    //1.通过对象进行访问
    person p;
    cout << p.m_A << endl;
    //2.通过类名进行访问
    cout << person::m_A << endl;
    //cout << person::m_B << endl;    无法访问，因为是私有成员
}
int main()
{
    test01();
    test02();

    return 0;
}