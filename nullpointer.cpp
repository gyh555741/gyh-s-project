#include <iostream>
using namespace std;
//空指针调用成员函数
class person{
    public:
    void showclassname(){
        cout << "this is a person class" << endl;
    }
    void showclassage(){
        //报错原因是因为传入的指针是为NULL,加上下面if这段代码就好了
        if(this==NULL){
            return;
        }
        cout << "age = " << this->m_age << endl;
    }
    int m_age;
};
void test01(){
    person *p=NULL;
    p->showclassname();
    p->showclassage();
}
int main()
{
    test01();

    return 0;
}