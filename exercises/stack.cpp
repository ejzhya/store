#include <iostream>

#include "stack.h"
using namespace std;

int main(){
    Stack a(5);
    // a.push(6);
    // a.push(8);
    try{
    cout<<a.size()<<endl;
    cout<<a.top()<<endl;
    cout<<a.pop()<<endl;
    }catch(const char*){
        cout<<"size problem"<<endl;
    }
    return 0;
}
