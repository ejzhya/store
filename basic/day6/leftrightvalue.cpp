#include <iostream>

using namespace std;
void fun(int&& r){
    cout<<"right"<<endl;
}
void fun(int& r){
    cout<<"left"<<endl;
}

int main(){
    int x =20;
    int &&rx=x*2;//固定的是结果40
    int y=rx;
    x=30;
    //rx=60;
    cout<<rx<<endl;
    cout<<y<<endl;
    fun(x*2);//x*2是右值
    fun(y);//左值
    return 0;
}