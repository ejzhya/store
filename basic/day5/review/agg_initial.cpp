#include <iostream>
using namespace std;

class A{
    public:
    char c;
    int a;
    int b;
    
    A(int _a, int _b, char _c):a(_a),b(_b),c(_c){};
    void print()const{cout<<"print:"<<a<<b<<c<<endl;}
    A(){};
    ~A(){cout<<"~A()"<<endl;}
    virtual void f()const{};
};
int main(){
    A a[]={{1,1,'a'},{2,2,'b'}};
    a[0].print();
    a[1].print();
    a[3].print();//竟然会赋值
    cout<<"a sizeof:"<<sizeof(a)<<endl;
    cout<<"--------"<<endl;
    A *p=new A[2]{{2,1,'a'},{3,2,'b'}};
    p->print();
    (p+1)->print();//(++p)->print();出现~A()无限循环
    delete[] p;
    cout<<"---------"<<endl;
    A b;
    cout<<"size of:"<<sizeof(A)<<endl;//字节对其原则，64位8位对齐char占1个，下一个偏移量1，不是int倍数，自动补全到4，int倍数，在int+4,是int倍数+4，所以是12.
    //虚函数 在64位占8个字节，无论有多少个虚函数这只有一个指针。续上12不是8的倍数加到16+虚指针占用空间8=24.
    return 0;
}