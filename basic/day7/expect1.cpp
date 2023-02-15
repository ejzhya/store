#include <iostream>
using namespace std;

class VIE{
    private:
    int idx;
    public:
    VIE(int i):idx(i){}
    ~VIE(){}
    void diag(){
        cout<<"VIE:"<<idx<<endl;
    }
};

class VIEE: public VIE{
    public:
    VIEE(int i):VIE(i){}

};

template<class T>
class Vector{
    private:
    T *element;
    int size;
    public:
    Vector(int s):size(s){
        element=new T[s];
    }
    ~Vector(){delete[] element;}
    T& operator[](int idx){
        if(idx<0 || idx>=size){
            throw VIE(idx);//抛异常，这个抛出的异常的数据类型VIE要用到catch里，和catch(VIE v)进行匹配
        }
        return element[idx];
    }
};

void  func() throw(VIE) {//我可能抛VIE异常
    Vector<int> v(10);
    v[3]=5;
    cout<<"1\n";
    int i=v[42];
    cout<<"2\n";
}
//void f(){}//我可能抛任何异常
//void f()throw(){}//我保证不抛异常

void func2(){
    cout<<"3\n";
}

void outer(){
    try{
        cout<<"4\n";
        func();
        func2();
    }catch (VIEE v){
        cout<<"VIEE error"<<endl;

    }catch (VIE v){
        cout<<"VIE error"<<endl;

    }catch(...){//...可以到任何异常
        //v.diag()
        cout<<"6\n";
    }
    cout<<"5\n";
}

int main(){
    outer();//用异常处理方式

    //Vector <int> v(20);
    //v[20]=12;直接做，异常运行停止
}
//子类有问题可以被catch(父类)捕捉
//catch 小类型放前面
//匹配成功标准 catch()中类型与抛出异常后面跟的表达式类型相同或是它的父类