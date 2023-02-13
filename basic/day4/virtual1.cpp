//how virtual work in c++? vptr vtable 
#include <iostream>

using namespace std;

class A{
    public:
    int i;
    public:
    A(){i=10;cout<<"A()"<<i<<endl;f();}
    virtual void f(){cout<<"A::f()"<<endl;}
    void g(){this->f();}
};

class B: public A{
    public:
    int i;
    public:
    B(){i=20;cout<<"B()"<<i<<endl;}
    void f(){cout<<"B::f()"<<endl;}
};

int main(){
    //cout<<sizeof(A)<<","<<sizeof(B)<<endl;
    B b;
    //int *p=(int*)&b;
    //cout<<p[0]<<","<<p[1]<<endl;
    A* p=&b;
    //b.f();
    long long **vp=(long long**)p;
    void (*pf)()=(void(*)())(*(*vp));//根据vtable原理用指针指向b的f()函数
    cout<<"-----------------"<<endl;
    pf();
    return 0;

}