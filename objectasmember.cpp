#include <iostream>
using namespace std;
#include <string>
//类对象作为类成员
//初始化列表compare with函数体内赋值：初始化列表是直接构造，效率高，函数体内赋值是先构造再赋值，效率低
//初始化列表是直接造东西，函数体内赋值是先造空壳后填充内容
//因为此处phone没有无参构造，m_phone没有初值，所以不能用函数体内赋值
//我知道你想问m_name不是也没有初值吗，其实是因为string可以无参构造(虽然构造出来的是空字符串)，但是phone不能无参构造呀
//唯一一种不能进行无参构造的就是自己写了有参构造，但没写无参构造
//这个如果在phone里面写一个无参构造也可以在函数体内赋值
//有有参构造就不会默认生成无参构造，所以需要手动写
//当其他类对象作为本类中的成员的时候，会先进行其他类对象的构造，再进行自身的构造
//当其他类对象作为本类中的成员的时候，会先进行自身的析构，再进行其他类对象的析构
class phone{
    public:
    phone(string pname){
        m_pname=pname;
        cout << "phone的构造函数调用" << endl;
    }
    ~phone(){
        cout << "phone的析构函数调用" << endl;
    }
    string m_pname;
    
};
class person{
public:
    person(string name,phone phone):m_name(name),m_phone(phone){
        cout << "perosn的构造函数调用" << endl;
    }
    ~person(){
        cout << "perosn的析构函数调用" << endl; 
    }
    string m_name;
    phone m_phone;
};
void test01(){
    person p("张三",phone("iphone16"));
    cout << p.m_name << "拿着" << p.m_phone.m_pname << endl;

}
int main()
{
    test01();

    return 0;
}