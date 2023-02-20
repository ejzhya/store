//写一个模板函数的stack
#ifndef _STACKT_H
#define _STACKT_H

template <class T>
class Stackt{
    public:
    Stackt(int size):length(size){
        data=new T[length];
        ptr=0;
    }

    T push(T i){
        if(ptr>length) throw "overflow";
        else data[ptr++]=i;
        return i;
    }

    T pop(){
        if(ptr<=0)throw "downflow";
        else return data[--ptr];
    }
    T top(){
        if(ptr<=0)throw "downflow";
        else return data[ptr-1];
    }
    int size(){
        return ptr;
    }


    private:
    T *data;
    int ptr;
    int length;

};
#endif