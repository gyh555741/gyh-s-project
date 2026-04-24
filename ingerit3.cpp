#include <iostream>
using namespace std;
//继承中的构造和析构顺序
//构造的顺序是先有父类再有子类
//析构的顺序是先析构子类再析构父类
class base{
    public:
    base(){
        cout << "base的构造函数" << endl;
    }
    ~base(){
        cout << "base的析构函数" << endl;
    }
};
class son:public base{
    public:
    son(){
        cout << "son的构造函数" << endl;
    }
    ~son(){
        cout << "son的析构函数" << endl;
    }
};
void test01(){
    base b;
    cout << endl;
    son s;
}
int main()
{
    test01();

    return 0;
}