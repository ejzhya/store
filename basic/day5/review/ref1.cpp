#include <iostream>

using namespace std;
int j=10;
void f(int&);//函数声明，函数声明时形参可以省略，编译器只检查类型
int main(){
    int x=3;
    int& y=x;
    const int& z=x;//不能改变是常变量
    x=y+x;
    f(x);
    cout<<"y:"<<y<<endl;
    cout<<"z"<<z<<endl;
    return 0;
}
void f(int& r){
   cout<<"f():"<<r<<endl;
}