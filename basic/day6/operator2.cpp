//opterator 赋值=
//skeleton assignament operator
//ppt上，问题问什么要this!=&rhs进行判断
// T& T::operator=(const T& rhs){
//     //check for self assignment
//     if (this!=&rhs){
//         //perform assignment
//     }
//     return *this;
// }
#include <iostream>

using namespace std;

class A{
public:
    A(const A&that){
        size=that.size;
        buf=new int[size];
        for (int i=0;i<size;i++){
            buf[i]=that.buf[i];
    }
    }
    A& operator=(const A&that){
        delete[] buf;//因为下面又分配新空间了，防止内存泄露
        size=that.size;
        buf=new int[size];
        for (int i=0;i<size;i++){
        buf[i]=that.buf[i];
    }//重新赋值后返回指针，实现赋值
        return *this;
    }
private:
    int size;
    int *buf;
};
//所以如果this(类的隐藏指针))如果等于that
//a=a 就不用运行了直接return *this,所以要check一下this和that是否相等；
