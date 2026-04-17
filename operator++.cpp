#include <iostream>
using namespace std;
class myinteger{
    friend ostream &operator<<(ostream & cout,const myinteger &p);
    public:
    myinteger(){
        m_num=0;
    }
    //重载前置++运算符
    myinteger &operator++(){
        //先进行++运算
        m_num++;
        //再将自身返回
        return *this;
    }
    //重载后置++运算符
    myinteger operator++(int){
        //先将自身拷贝一份
        myinteger temp = *this;
        //再进行++运算
        m_num++;
        return temp;
    }
    private:
    int m_num;
};
//重载<<运算符
ostream &operator<<(ostream &cout,const myinteger &p){
    cout << p.m_num << endl;
    return cout;
}
void test01(){
    myinteger a;
    cout << ++a;
    cout << a++;
    cout << a;
}
int main()
{
    test01();

    return 0;
}