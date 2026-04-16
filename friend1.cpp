#include <iostream>
#include <string>
using namespace std;
class Building;
class goodgay{
    public:
    goodgay();
    public:
    void visit();//参观函数，访问building中的属性
    Building *building;
};
class Building{
    friend class goodgay;//goodgay类是Building类的友元类，让goodgay类可以访问Building类的私有属性
    public:
    Building();
    public:
    string m_settingroom; //客厅
    private:
    string m_bedroom; //卧室
};
//类外写构造函数
Building::Building(){
    m_settingroom="客厅";
    m_bedroom="房间";
}
goodgay::goodgay(){
    //创造建筑物对象
    building=new Building();
}
void goodgay::visit(){
    cout << "好基友正在访问" << building->m_settingroom << endl;
    cout << "好基友正在访问" << building->m_bedroom << endl;//需要13行的代码才可以访问私有属性
}
void test01(){
    goodgay g;
    g.visit();
}
int main()
{
    test01();
    
    return 0;
}