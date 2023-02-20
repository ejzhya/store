
#include <iostream>

#include "queue.h"
using namespace std;

int main(){
    CircleQueue<string> queue(10);
    queue.push("one");
    queue.push("two");
    queue.push("three");
    queue.push("four");
    queue.push("five");
    cout<<"the length of circlequeue:"<<queue.size()<<endl;
    while(!queue.isEmpty()){
        try{
        cout<<"pop:"<< queue.pop();
        }catch(const char *){cout<<"error"<<endl;}
        try{
        cout<<"front:"<<queue.front()<<endl;
        }catch(const char *){cout<<"error"<<endl;}
       
    }
    cout<<"pop:"<< queue.pop();
    return 0;

}