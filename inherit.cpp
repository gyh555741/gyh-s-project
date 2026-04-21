#include <iostream>
using namespace std;
//普通实现页面会有很多重复代码
//java页面
// class java{
//     public:
//     void header(){
//         cout << "首页,公开课,登录,注册...(公共页面)" << endl; 
//     }
//     void footer(){
//         cout << "帮助中心.交流群,版权声明...(公共底部)" << endl;
//     }
//     void left(){
//         cout << "java,python,c++,c#...(左侧导航栏)" << endl;
//     }
//     void content(){
//         cout << "java课程,java面试,java学习...(内容)" << endl;
//     }
// };
// void test01(){
//     java j;
//     cout << "java下载视频页面如下:" << endl;
//     j.header();
//     j.footer();
//     j.left();
//     j.content();
// }
//继承实现页面
//公共页面类
class basepage{
    public:
    void header(){
        cout << "首页,公开课,登录,注册...(公共页面)" << endl; 
    }
    void footer(){
        cout << "帮助中心.交流群,版权声明...(公共底部)" << endl;
    }
    void left(){
        cout << "java,python,c++,c#...(左侧导航栏)" << endl;
    }
};
//java页面
class java:public basepage{
    public:
    void content(){
        cout << "java课程,java面试,java学习...(内容)" << endl;
    }
};
//python页面
class python:public basepage{
    public:
    void content(){
        cout << "python课程,python面试,python学习...(内容)" << endl;
    }
};
//c++页面
class cpp:public basepage{
    public:
    void content(){
        cout << "c++课程,c++面试,c++学习...(内容)" << endl;
    }
};
//继承的好处:减少重复代码
//用法:class 子类:public 父类{}
//子类也称为派生类
//父类也称为基类
// 测试函数
void testpage() {
    cout << "========= Java页面 =========" << endl;
    java javaPage;
    javaPage.header();  // 继承自父类
    javaPage.left();    // 继承自父类
    javaPage.content(); // 子类独有
    javaPage.footer();  // 继承自父类
    cout << endl;

    cout << "========= Python页面 =========" << endl;
    python pythonPage;
    pythonPage.header();
    pythonPage.left();
    pythonPage.content();
    pythonPage.footer();
    cout << endl;

    cout << "========= C++页面 =========" << endl;
    cpp cppPage;
    cppPage.header();
    cppPage.left();
    cppPage.content();
    cppPage.footer();
}
int main()
{
    testpage();

    return 0;
}