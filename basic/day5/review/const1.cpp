//const修饰普通类型变量
#include <iostream>
using namespace std;
int main(){
    const int a=7;
    const int b=7;
    const int* p=&a;
    int *p2=(int*)p;//强制类型转换
    //int *p2=(int*)&a;
    *p2=8;

    cout<<"p1:"<<*p<<endl;
    cout<<"p1:"<<p<<endl;
    cout<<"p2:"<<*p2<<endl;
    cout<<"p2:"<<p2<<endl;
    cout<<"a:"<<a<<endl;
    cout<<"a:"<<&a<<endl;
    //明明指向的地址都一样但a的输出仍然是7；

    return 0;

}