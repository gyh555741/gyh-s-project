#include <iostream>
using namespace std;
class person{
    public:
    //无参构造函数
    person(){
        cout << "person的无参构造函数的调用" << endl;   
    }
    //有参构造函数
    person(int a){
        age=a;
        cout << "person的有参构造函数的调用" << endl;
    }
    //拷贝构造函数
    person(const person &p){
        age=p.age;
        cout << "person的拷贝构造函数的调用" << endl;
    }
    //析构函数
    ~person(){
        cout << "person的析构函数的调用" << endl;
    }
    int age;
};
void test1(){
    //括号法
    person p1;
    person p2(10);
    person p3(p2);
    cout << p2.age << endl;
    cout << p3.age << endl;
    //显示法
    person p4;
    person p5=person(10);
    person p6=person(p5);
    person(10);//匿名对象，当前行执行完会立即回收掉匿名对象
     //不要用拷贝构造函数去初始化匿名对象
    //隐式转换法
    person p7=10;
    person p8=p7;
}
int main()
{
    test1();

    return 0;
}