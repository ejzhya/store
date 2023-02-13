//成员变量是const,则改变量必须初始化。const 成员函数调用
//const 对象调用const成员函数，非const 对象调用非const成员函数
#include <iostream>

using namespace std;

class A{
    public:
    A(int _i):i(_i){cout<<"A():"<<endl;}//成员变量是const
    void f()const{cout<<"A()::f() const"<<i<<endl;}
    void f(){cout<<"A()::f()"<<i<<endl;}
    ~A(){cout<<"~A()"<<endl;}
    private:
    const int i;//必须初始化

};

int main(){
    const A a(1);
    A b(2);//const 对象调用const成员函数，非const 对象调用非const成员函数
    A* p;
    p=&b;
    cout<<"a.f()"<<endl;
    a.f();
    cout<<"-----------"<<endl;
    cout<<"p->f():"<<endl;
    p->f();

    return 0;
}