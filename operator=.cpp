#include <iostream>
using namespace std;
//赋值运算符重载
class person{
    public:
    person(int age){
        m_age = new int(age);
    }
    ~person(){
        if(m_age!=NULL){
            delete m_age;
            m_age = NULL;
        }
    }
    //重载赋值运算符
    person &operator=(person &p){
        //编译器是提供浅拷贝
        //应该先判断是否有属性在堆区，如果有就先释放干净，然后再深拷贝
        if(m_age!=NULL){
            delete m_age;
            m_age = NULL;
        }
        m_age =new int(*p.m_age);
        return *this;
    }
    int *m_age;
};
void test01(){
    person p1(18);
    person p2(20);
    person p3(30);
    cout << "p2的年龄是" << *p2.m_age << endl;
    cout << "p1的年龄是" << *p1.m_age << endl;
    p2 = p1;
    cout << "p2的年龄是" << *p2.m_age << endl;
    *p2.m_age = 25;
    cout << "p2的年龄是" << *p2.m_age << endl;
    p3=p2=p1;
    cout << "p3的年龄是" << *p3.m_age << endl;
    cout << "p2的年龄是" << *p2.m_age << endl;
}
int main()
{
    test01();

    return 0;
}