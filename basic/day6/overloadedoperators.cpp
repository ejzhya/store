//overloaded operators 让对象计算表现的像固有类型
//注意参数类型，返回类型。
#include <iostream>
using namespace std;

class A{
    int i;
public:
A(int ii):i(ii){cout<<"A("<<i<<")"<<endl;}
A(const A&r):i(r.i){cout<<"A&A"<<endl;}//在f()传参时调用了构造函数这是个特殊的构造函数，自己的reference,前面只出现一次构造函数是他没有显示
virtual ~A(){cout <<"~A()"<<endl;}
int getValue ()const{return i;}
void setValue(int i){this->i=i;}
//const A operator+(const A& _)const{//_也可以用$t,可以表示一个后面用不着的变量
//     cout<<"operator+"<<endl;
//     A a(i+_.i);
//     return a;
// }//overloaded operator写在里面member function
friend const A operator+(const A&,const A&);//允许该函数访问该类的私有成员，函数定义要在类的外面
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
// const A operator+(const A&r,const A&l){//返回const object
//     cout<<"outside"<<endl;
//     return A(l.getValue()+r.getValue());
// }//写在类外面global function
const A operator+(const A &r,const A&l){
    cout<<"+ outside"<<endl;
    return A(l.i+r.i);
}
A ff(int i){return A(i);}//
int main(){
    A a(5);
    A b(6);
    A c=a+b;
    //A d=a+3;//a.operator+(3) A d=3+a;error;
    return 0;
}