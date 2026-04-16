#include <iostream>
using namespace std;
//this指针
/*this 指向【整个对象的首地址】，不是某个成员。
每个成员在对象里有固定偏移量。
this-> 成员 = this + 偏移量，编译器自动算。*/
//返回对象本身用*this
class person{
    //解决名称冲突
    public:
    person(int age){
        this->age=age;//this指针指向被调用的成员函数所属的对象
    }
    //用这个函数的话只能加一次，因为这个函数用一次后的返回值是void，而需要再次调用需要person类型
    void addage(person &p){
        this->age+=p.age;
    }
    //需要调用多次就这样写
    person &personaddage(person &p){//没有&就相当于返回的是person类型的值(克隆)，有&才返回p4本身(引用)
        //这里person的引用 & = 对象本体的别名
        //person& 不是返回地址,是返回 *this 这个对象本身的别名
        this->age+=p.age;
        return *this;//this指向test03里p4的指针，而*this就是p2这个对象主体
    }
    int age;
};
void test01(){
    person p(18);
    cout << "p的年龄是" << p.age << endl;
}
void test02(){
    person p1(10);
    person p2(10);
    p2.addage(p1);
    cout << "p2的年龄是" << p2.age << endl;
}
void test03(){
    person p3(10);
    person p4(10);
    p4.personaddage(p3).personaddage(p3).personaddage(p3);//链式编程思想
    cout << "p4的年龄是" << p4.age << endl;
}
int main()
{
    test01();
    test02();
    test03();

    return 0;
}