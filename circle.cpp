#include <iostream>
using namespace std;
#define PI 3.14
class circle{
//访问权限
//公共权限
public:
//属性
//半径
    int m_r;
//行为
//获取圆的周长
    double calculateZC()
    {
        return 2*PI*m_r;
    }

};
int main()
{
//通过圆类，创建具体的圆(对象)
//实例化(通过一个类，创建一个对象的过程)
    circle c1;
//给圆的对象进行赋值 
    c1.m_r=8;
    cout << "圆的周长是" << c1.calculateZC() << endl;

    system("pause");

    return 0;
}