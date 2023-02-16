//reference cout in action
//计数分享了多少次
//a reference count is a count of the number of times an object is shared
#include <iostream>
#include "String.h"

using namespace std;

int main(){
    String abc="abcdef";//
    //String def=abc;//shallow copy of abc
    //abc = "Hello world";//copy on write
    cout<<"abc:"<<endl;
    abc.prints();//成功输出耶~在试试前面的注释
    cout<<"-----------------"<<endl;
    String def=abc;
    abc="Hello world!";
    abc.prints();
    def.prints();
    //cout<<"def:"<<def<<endl;//hello world 1个.adcd 1个详见ppt吧
    return 0;
}
