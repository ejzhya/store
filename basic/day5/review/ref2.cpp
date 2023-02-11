#include <iostream>

using namespace std;
void f(int*& );
int main(){
    int a=10;
    int c=20;
    int*p1=&a;
    int*& p2=p1;//引用指针
    p1=&c;
    f(p1);
    cout<<"p1:"<<*p1<<endl;
    cout<<"p2:"<<*p2<<endl;

    return 0;
}
void f(int*& r){
    cout<<"f():"<<*r<<endl;

}