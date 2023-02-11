//const 函数参数传递和 函数值返回
//类 的 const
//const 修饰类成员函数，其目的是防止成员函数修改被调用对象的值，
//如果我们不想修改一个调用对象的值，所有的成员函数都应当声明为 const 成员函数。
# include <iostream>
using namespace std;

void cpf(const int a){//const修饰形参
    cout<<a<<endl;
    //++a;//错误，a不能修改
}
void cpf2(int const *a){
    //int p=10;
    //a=&p;//a的值不能改变
    cout<<"cpf2:"<<*a<<endl;
}
class Test{
    public:
    Test(){}
    Test(int _m):_cm(_m){}
    int get_cm()const{
       // _cm+=1;//加了const 成员不能被改变

        return _cm;
    }
    private:
    int _cm;
};
void cmf( Test& _tt){//在函数体中不能修改_tt
    cout<<_tt.get_cm()<<endl;
}
void cmf2( const Test& _tt){
    cout<<_tt.get_cm()<<endl;
}
int main(){
    double a=4.0;
    const int b=3;
    int c=4;
    cpf(a);//类型被转换
    cpf(b);
    //int* p=(int*)&a;
    //cpf2(p);
    cpf2(&c);
    cout<<"------------"<<endl;
    Test t(8);
    cmf(t);
    
    return 0;
}
// 由调用成员函数时隐式传入的当前对象的this指针引起。

//非const成员函数中的隐式参数：classA* this
//const成员函数中的隐式参数：const classA* this
//const对象的指针为const classA* this，因此传入非const成员函数时编译器报错（类型不匹配，无法从const 指针转换为非const指针）；但传入const成员函数则类型匹配。
//非const对象的指针为classA* this，可以调用const成员函数，因为const修饰符保证了不会修改该对象。