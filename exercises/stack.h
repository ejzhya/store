//exercise class stack
#ifndef _STACK_H
#define _STACK_H

class Stack{
    public:
    Stack(int size){
        data=new int[length=size];
        ptr=0;
    }
    void push(int x){
        if(ptr<length)
        data[ptr++]=x;
        else
        throw "overflow";
    }
    int pop(){
        if(ptr>0)
        return data[--ptr];
        else
        throw "underflow";
    }
    int top()const{
        if(ptr>0)
        return data[ptr-1];
        else 
        throw "underflow";
    }
    int size()const{
        return ptr;
    }
    ~Stack(){
        delete[] data;
    }
    private:
    int *data;
    int length;
    int ptr;
};


#endif