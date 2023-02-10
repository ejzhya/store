#include <iostream>
using namespace std;

class A{
    int i;
public:
A(int ii):i(ii){cout<<"A()"<<endl;}
A(const A&r):i(r.i){cout<<"A&A"<<endl;}//在f()传参时调用了构造函数这是个特殊的构造函数，自己的reference,前面只出现一次构造函数是他没有显示
virtual ~A(){cout <<"~A()"<<endl;}
int getValue(){return i;}
void setValue(int i){this->i=i;}
};
void f(A aa){
    cout<<aa.getValue()<<endl;
}
int main(){
    A a(10);
    cout<<&a<<endl;
    cout <<"----------------"<<endl;
    f(a);
    cout <<"-----------------"<<endl;

    return 0;
}