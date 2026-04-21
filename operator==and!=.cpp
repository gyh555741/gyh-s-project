#include <iostream>
#include <string>
using namespace std;
//重载关系运算符
class person{
    public:
    person(string name,int age){
        m_name=name;
        m_age=age;
    }
    //重载==号
    int operator==(person &p){
        if(this->m_name==p.m_name&&this->m_age==p.m_age){
            return 1;
        }else return 0;
    }
    //重载!=号
    int operator!=(person &p){
        if(this->m_name!=p.m_name||this->m_age!=p.m_age){
            return 1;
        }else return 0;
    }
    int m_age;
    string m_name;
};
void test01(){
    person p1("tom",18);
    person p2("tom",18);
    person p3("jerry",20);
    if(p1==p2){
        cout << "p1和p2相等" << endl;
    }else{
        cout << "p1和p2不相等" << endl;
    }
    if(p1==p3){
        cout << "p1和p3相等" << endl;
    }else{
        cout << "p1和p3不相等" << endl;
    }
    if(p1!=p2){
        cout << "p1和p2不相等" << endl;
    }else{
        cout << "p1和p2相等" << endl;
    }

}
int main()
{
    test01();

    return 0;
}