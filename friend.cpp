#include <iostream>
#include <string>
using namespace std;
//友元
//建筑物类
class Building{\
    //goodgay全局函数是building的好朋友，可以访问building中私有成员
    friend void goodgay(Building *building);
    public:
    Building(){
        m_settingroom="客厅";
        m_bedroom="房间";
    }
    public:
    string m_settingroom;
    private:
    string m_bedroom;
};
void goodgay(Building *building){
    cout << "正在访问的是" << building->m_settingroom << endl;
    cout << "正在访问的是" << building->m_bedroom << endl;
}
void test01(){
    Building building;
    goodgay(&building);
}
int main()
{
    test01();

    return 0;
}