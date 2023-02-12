//Vector 类的使用，c++标准库里的 优点不用一开始就定义需要的空间可以把字符一个个加上
#include <iostream>
#include <vector>
using namespace std;

// int main(){
//     vector<int> x;
//     for(int a=0;a<1000;a++)x.push_back(a);//调用类里面的函数
//     vector<int>::iterator p;
//     for (p=x.begin();p<x.end();p+=5)cout <<*p<<" ";
//     return 0;
// }
int main(){
    vector<string> x;
    string a="Hello";
    x.push_back(a);
    x.push_back(" world!");
    vector<string>::iterator p;
    for (p=x.begin();p<x.end();p++)cout<<*p<<"";
    return 0;
}