#include <iostream>
#include <string>
using namespace std;
//函数调用重载符
//仿函数
class myprint{
    public:
    //重载函数调用运算符
    void operator()(string test){
        cout << test << endl;
    }
};
void test01(){
    myprint p;
    p("hello");
}
//仿函数非常灵活，没有固定的写法
//加法类
class myadd{
    public:
    int operator()(int a,int b){
        return a+b;
    }
};
void test02(){
    myadd p;
    cout << p(10,20) << endl;
    //匿名函数对象
    cout << myadd()(10,20) << endl;
}
int main()
{
    test01();
    test02();

    return 0;
}