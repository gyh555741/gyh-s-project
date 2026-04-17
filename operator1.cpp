#include <iostream>
using namespace std;
//左移运算符重载
class person{
    public:
    //一般不会利用成员函数重载<<运算符，因为无法实现cout在左侧
    int m_a;
    int m_b;
};
//只能利用全局函数重载左移运算符
ostream &operator<<(ostream &cout,person &p){
    cout << "m_a = " << p.m_a << endl;
    cout << "m_b = " << p.m_b << endl;
    return cout;
}
void test01(){
    person p;
    p.m_a = 10;
    p.m_b = 20;
    cout << p << endl;
}
int main()
{
    test01();

    return 0;
}