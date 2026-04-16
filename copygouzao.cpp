#include <iostream>
using namespace std;
//拷贝构造函数的调用时机
/*构造函数的调用规则
1.创建一个类，c++编译器至少会给每个类都添加3个函数
//默认构造函数（空实现）
//有参构造函数（空实现）
//拷贝构造函数（值拷贝）
*/
class person{
    public:
    person(){
        cout << "person的默认（无参）构造函数调用" << endl;
    }
    person(int age){
        m_age=age;
        cout << "person的有参构造函数调用" << endl;
    }
    person(const person &p){
        m_age=p.m_age;
        cout << "person的拷贝构造函数调用" << endl;
    }
    ~person(){
        cout << "person的析构函数调用" << endl;
    }
    int m_age;
};
//1.使用一个已经调用完毕的对象来初始化一个新的对象
void test1(){
    person p1(20);
    person p2(p1);
    cout << "p2的年龄是" << p2.m_age << endl;
}
//2.值传递的方式给函数参数传值
void dowork(person p){

}
void test2(){
    person p;
    dowork(p);
}
//3.值方式返回局部对象
person dowork2(){
    person p1;
    return p1;
}
void test3(){
    person p=dowork2();
}
int main()
{
    cout << "test1:" << endl;
    test1();
    cout <<"test2:" << endl;
    test2();
    cout << "test3:" << endl;
    test3();

    return 0;
}