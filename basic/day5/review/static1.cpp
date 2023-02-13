//static 验证static的性质
//静态对象
//静态成员函数 静态成员变量
#include <iostream>

using namespace std;

class A{
    public:
    A(){cout<<"A()"<<endl;}
    void f(){cout<<"A::f()"<<i<<endl;}
    ~A(){cout<<"~A()"<<endl;}
    private:
    int i;

};
void ff(){
    cout<<"in A()"<<endl;
    static A a;//定义静态对象
    cout<<"out A()"<<endl;

}
A b;
int main(){
    cout<<"int main"<<endl;
    ff();
    cout<<"------------"<<endl;
    ff();
    cout<<"end"<<endl;

    return 0;

}
