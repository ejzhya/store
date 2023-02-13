//static
//静态成员变量 所有对象的都连在一起global to all class member function
#ifndef _STAT_MEM_
#define _STAT_MEM_

class StatMem{
public:
    int getHeight(){return m_h;}
    void setHeight(int i){m_h=i;}
    int getWeight(){return m_w;}
    void setWeight(int i){m_w=i;}

    static int m_h;//静态成员变量，这里设为public, 静态变量public并不少见
    int m_w;

};
#endif