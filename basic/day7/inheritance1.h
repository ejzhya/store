
//继承构造函数方法
#ifndef _INHERITANCE_H_
#define _INHERITANCE_H_

#include <iostream>
using namespace std;
class A{
    public:
    A(int i){}
};
class B:public A{
    public:
    B(int i):A(i),d(i){}
    private:
    int d;
};

//利用using声明 使基类的成员函数成为自己的
//解决name hiding： 非虚函数using后可继承，虚函数不行
//解决构造函数重载问题
class Base{
    public:
    void f(double){
        cout<<"double\n";
    }
};
class Derived :Base{
    public:
    using Base::f;
    void f(int ){
        cout<<"int\n";
    }
};
//
class A{
    public:
    A(int i){cout<<"int\n";}
    A(double d, int i){}
    A(float f, char *s){}
};
class B:A{
    public:
    using A::A;
};
//基类函数有默认参数值，using派生类无法得到默认参数
class A{
    public:
    A(int a=3,double b=2.4){}
};
//委派构造函数 在前面A():i(i)构造函数可做初始化，所以委派和初始化冲突
class Info{
    public:
    Info(){InitRest();}//目标构造函数，InitRest在委派构造函数都进行执行
    Info(int i):Info(){tyep=i;}//委派
    Info(char e): Info(){name=e;}//委派
    void InitRest(){}
    private:
    int tyep;
    char name;
};
#endif