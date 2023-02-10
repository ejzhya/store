#include <iostream>
using namespace std;

class A{
    int i;
public:
A(int ii):i(ii){cout<<"A()"<<endl;}
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