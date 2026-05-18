#include <iostream>
#include <vector>
#include <string>
using namespace std;
class item{
    public:
    string name;
    double price;
    string type;
};
class equipment:public item{
    public:
    equipment operator+(const equipment &e){
        
    }
    int power;
    int defense;
};
ostream &operator<<(ostream &cout,item &p){
    cout << "name = " << p.name << endl;

}
class role{
    public:
    string name;
    int level;
    vector <item> s;
};
int main()
{

    return 0;
}