// class Node{
//     void *content=new unsigned char[sizeofelement];
//     Node *next;//*的位置好像一般这样
// };

//函数模板，
#include <iostream>
using namespace std;

template <class T>
void myswap(T& a,T& b){
    cout<<"T T"<<endl;
    T tmp = a;
    a = b;
    b = tmp;
}

// void myswap(int a,int b){
//     cout<<"int int"<<endl;
//     int tmp = a;
//     a = b;
//     b = tmp;
// }
int main()
{
    double a=6.2,b=5.4;
    int a1=2,b1=3;
    //myswap(a,b);
    //myswap(a,a1);//error ,T T时是两个相同的类型
    cout<<a<<":"<<a1<<endl;
}