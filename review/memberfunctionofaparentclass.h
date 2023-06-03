#ifndef __MEMBERFUNCTIONOFAPARENTCLASS_H_
#define __MEMBERFUNCTIONOFAPARENTCLASS_H_
#include<iostream>
using namespace std;
class A{
    public:
    void f(){
        cout<<"A:f()"<<endl;
    }

};

class B:public A{//注意要写public B才可以调用A
    public:
    void f(){
        cout<<"B::A::f()"<<endl;
    }
};

#endif