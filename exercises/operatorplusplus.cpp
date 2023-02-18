//自增++、-- 
//前置、后置
#include <iostream>

using namespace std;

class A{
    private:
    int math,science;
    public:
    A(int i, int j):math(i),science(j){};
    A operator++(){//前置++
        ++math;
        ++science;
        return *this;
    }
    //注意：C++的函数无法返回局部变量的引用，即，要么返回全局变量的引用，要么返回指针指向内容的引用。
    A operator++(int){//后置++
        A temp=*this;//临时对象
        math++;
        science++;
        return temp;
    }
    A operator--(){//前置--
        --math;
        --science;
        return *this;
    }
    A operator--(int){//后置++
        A temp=*this;//临时对象
        math--;
        science--;
        return temp;
    }
    void printf() const{
        cout<<"math:"<<math<<endl;
        cout<<"science:"<<science<<endl;
    }
};

int main(){
    A xiaoming(59,57);
    cout<<"xiaoming_grade:"<<endl;
    (--xiaoming).printf();
    (++xiaoming).printf();
    (xiaoming++).printf();
    (xiaoming--).printf();
    return 0;
}