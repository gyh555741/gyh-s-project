#include <iostream>
using namespace std;
#include <string>
class student{
public://公共权限
//类中的属性和行为统一称为成员
//属性又叫成员属性，成员变量
//行为又叫成员函数，成员方法
//属性
    string m_name;//姓名
    int m_id;//ID号
//行为
void showstudent(){
    cout << "学生姓名是:" << m_name << "\n" << "学生学号是:" << m_id << endl;
}
//给姓名赋值
void setname(string name){
    m_name=name;
}
//给学号赋值
void setid(int id){
    m_id=id;
}
};
int main()
{
    student s1;
    s1.m_name="李伟";
    s1.m_id=12345678;
    s1.showstudent();
    student s2;
    s2.setname("巴豆");
    s2.setid(87654321);
    s2.showstudent();

    system("pausae");

    return 0;
}