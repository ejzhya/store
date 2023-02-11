#include <iostream>

using namespace std;

int main(){
    int a=5;
    int b=6;
    int*p4=&b;
    int *p1=&a;
    int**p2=&p1;
    int **&p3=p2;//
    p3=&p4;
    cout<<"p3:"<<**p3<<endl;
    cout<<"p2:"<<**p2<<endl;
    return 0;

}