//static 
//静态成员变量 注意.h只是声明，要在cpp定义一个同名全局变量
#include "statmen.h"
#include <iostream>
using namespace std;

int StatMem::m_h;//注意这句话，要在cpp定义它的全局变量，.h只是声明 

int main(){
    StatMem sm1;
    StatMem sm2;//static h_w在两个对象里面一样的
    int i=0;
    cout<<sizeof(i++)<<endl;
    cout<<"i="<<i<<endl;
    sm1.setHeight(12);
    cout<<"sm1.getHeight()"<<sm1.getHeight()<<endl;
    cout<<"sm2.getHeight()"<<sm2.getHeight()<<endl;//
    sm2.setHeight(15);
    cout<<"sm1.getHeight()"<<sm1.getHeight()<<endl;
    cout<<"sm2.getHeight()"<<sm2.getHeight()<<endl;//
    sm2.setWeight(4);
    cout<<"getWeight"<<sm1.getWeight()<<endl;//h_w 不是static, 所以不一样
    cout<<"-----------------"<<endl;
    cout<<&sm1<<'\t'<<&(sm1.m_w)<<'\t'<<&(sm1.m_h)<<endl;
    cout<<&sm2<<'\t'<<&(sm2.m_w)<<'\t'<<&(sm2.m_h)<<endl;//sm2.m_h和 sm1.m_h地址一样
    cout<<sizeof(StatMem)<<endl;
    return 0;
}