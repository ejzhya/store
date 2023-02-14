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
void f(A aa){//调用函数，返回函数，传的是对象本身发生拷贝构造
    cout<<aa.getValue()<<endl;
}
A f1(){
    A aa(20);
    cout<<&aa<<endl;
    cout<<aa.getValue()<<endl;
    cout<<"-----------"<<endl;
    return aa;//返回对象时,发生拷贝构造
}
A ff(int i){return A(i);}//
int main(){
    A a(10);
    A b(a);
    A c=a;//与A b(a)等价 int i=6; int(6);
    cout<<&a<<endl;
    cout <<"----------------"<<endl;
    //f(a);
    A d=f1();//理论上这里会发生两次拷贝构造，实际都没有。一次f1()return aa的时候，2.这里赋值的时候。结果没有被编译器优化，结果与编译器有关
    //c++ 可以 A a; A b; a=b;可以对象赋值，其他oop不可以只能用指针。
    d.setValue(18);
    cout <<"-----------------"<<endl;
    A f=ff(22);
    cout<<"f.getvalue"<<f.getValue()<<endl;
    return 0;
}