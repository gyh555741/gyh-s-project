#include <iostream>
using namespace std;
#include <string>
class person{
public:
    void setname(string name){
        m_name=name;
    }
    void getname(){
        cout << "姓名是：" << m_name << endl;
    }
    void setage(int age){//合法性效验
        if(age<0||age>150){
            cout << "年龄输入有误" << endl;
            return;
        }
       m_age=age;
    }
    void setidol(string idol){
        m_idol=idol;
    }
private:
    string m_name;//可读可写
    int m_age=18;//只写,或者改成只有年龄在0到150岁之间才能读取成功
    string m_idol;//只读

};
int main()
{
    person w;
    w.setname("伍");
    w.getname();
    w.setage(166);
    w.setidol("谷宇浩");

    system("pause");

    return 0;
}