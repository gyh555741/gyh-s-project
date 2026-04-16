#include <iostream>
using namespace std;
//浅拷贝:简单的赋值拷贝操作
//深拷贝:在堆区重新申请空间，进行拷贝操作
//important:如果属性有在堆区开辟的，一定要自己写一个拷贝构造函数，防止浅拷贝带来的问题
//浅拷贝和深拷贝对比:浅拷贝快，占用内存小，深拷贝慢，占用内存大，但用new就要用深拷贝
class person{
    public:
    person(){
        cout << "person的默认(无参)构造函数调用" << endl;
    }
    person(int age,int height){
        m_age=age;
        m_height=new int(height);
        cout << "person的有参构造函数调用" << endl;
    }
    person(const person &p){ 
        m_age=p.m_age;//因为拷贝构造函数是自己写的，编译器不会自己写，所以普通成员也需要手动赋值，不写m_age就会乱码，不信试试
        m_height=new int(*p.m_height);//深拷贝就是重新给它分配内存
        cout << "person的拷贝构造函数调用" << endl;
    }
    ~person(){
        if(m_height!=NULL){
            delete m_height;
            m_height=NULL;
        }
        cout << "person的析构构造函数调用" << endl;
    }
    public:
    int m_age;
    int *m_height;
};
void test01(){
    person p1(18,178);
    cout << "p1的年龄是" << p1.m_age << endl;
    person p2(p1);
    cout << "p2的年龄是" << p2.m_age << endl;
}
int main()
{
    test01();

    return 0;
}