//vector是一个容器
#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> x;
    for ( int a=0;a<1000;a++)
    x.push_back(a);
    cout<<x.size()<<endl;
    vector<int>::iterator p;//verctor<int>里的类iterator类型的p对象
    for (p=x.begin(); p<x.end();p+=5)//每5个取一次
    cout<<*p<<" ";//* 是经过运算符重载的
    cout<<endl;
    for (auto k:x){//k是类型推断，新的c++都喜欢用类型推断c++11新类型，-std=c++11
        cout << k <<" ";
    }
cout<<endl;
    return 0;
}