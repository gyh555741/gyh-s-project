#include <iostream>
using namespace std;
//继承中的对象模型
class base{
    public:
    int m_a;
    protected:
    int m_b;
    private:
    int m_c;
};
class son:public base{
    public:
    int m_d;
};
void test01(){
    //父类中所有非静态成员属性都会被子类继承下去
    //父类中私有成员属性是被编译器隐藏了，因此访问不到，但是确实被继承下去了
    cout << "size of son = " << sizeof(son) << endl;
}
int main(){
    test01();

    return 0;
}