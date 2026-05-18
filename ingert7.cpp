#include <iostream>
using namespace std;
//菱形继承(钻石继承)：
//有两个派生类继承了同一个基类，又有某个类同时继承了这两个派生类
//动物类
class animal{
    public:
    int m_age;

};
//可以利用虚继承来解决菱形继承产生的问题
//继承之前加上关键字virtual变成虚继承
//animal类变成虚基类
//羊类
class sheep:virtual public animal{

};
//驼类
class tuo:virtual public animal{

};
//羊驼类
class sheeptuo: public sheep,public tuo{

};
void test01(){
    sheeptuo st;
    //当菱形继承时，两个父类有相同的数据，需要加作用域区分
    st.sheep::m_age=18;
    st.tuo::m_age=16;
    cout << "sheep's age = " << st.sheep::m_age << endl;
    cout << "tuo's age = " << st.tuo::m_age << endl;
    //但这份数据只需要一份就可以了，菱形继承导致数据有两份，这样导致资源浪费
    //所以采用虚继承，方法在上面
    //这样所有m_age都是一样的，也不用加作用域来区分了
    st.m_age=25;
    cout << "m_age = " << st.m_age << endl;
}
int main()
{
    test01();

    return 0;
}