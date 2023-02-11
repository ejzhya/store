/*2.const 修饰指针 a.const修饰指针指向的内容，则内容不可变
b.const 修饰指针，则指针不可变，指向的内存地址不变 
c.const修饰指针和指针指向的内容，则指针和指针指向的内容都不可变 */
#include <iostream>

using namespace std;

int main(){
    int a=10;
    int b=5;
    int c=10;
    const int* p=&a;//const在*左边 左定值，指向的内容不可变
    //以上指向变量a,*p不可赋值
    p=&b;
    cout<<"*p:"<<*p<<endl;
    cout<<"p:"<<p<<endl;
    cout <<"&a:"<<&a<<endl;
    cout<<"-----------------"<<endl;
    int* const p2=&a;//const在*右边右定址，指向的内存地址不能变
    //p=&b;//不可赋值
    *p2=b;
    cout<<"*p2:"<<*p2<<endl;
    cout<<"p2:"<<p2<<endl;
    cout<<"--------------------"<<endl;
    const int *const p3=&c;//const定义时需要初始化
    //  值和地址都不能变











}