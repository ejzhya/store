#include <iostream>

using namespace std;

class A{
public:
    int i;
public:

A(){i=10;cout<<"A()"<<i<<endl;}
virtual void f(){cout <<"A::f()"<<endl;}//virtual 虚继承，表示子类可能出现同名函数，父类和子类的函数是override（覆盖）关系，编译时进行
//void f(){cout <<"A::f()"<<endl;}
};

class B: public A{
public:
    int i;
public:
B(){i=20; cout<<"B()"<<i<<endl;}
void f(){cout<<"B::f()"<<endl;}
};
int main(){
    B b;
    A *p=&b;//则p是A类的 空间也是A类的大小，但指向子类
    b.f();
    p->f();//虽然p指向b了但是值还是a类的值，编译的时候定的，所以是A类，用virtual
    cout <<sizeof(*p)<<endl;
    int *pi=(int*)p;
    cout <<b.i<<endl;
    cout <<p->i<<endl;
    cout <<pi[0]<<endl;//一个父类一个子类
    cout <<pi[1]<<endl;
    return 0;

}