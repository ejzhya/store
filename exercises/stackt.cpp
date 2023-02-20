//模板stack
#include <iostream>

using namespace std;
#include "stackt.h"
int main(){
    int i;
    cout<<"Hello"<<endl;
    Stackt <string> a(5);
    for (i=0;i<5;i++)
    a.push("how beautiful you are");
    cout<<a.size()<<endl;
    i=5;
    while (i>0){
        cout<<a.pop()<<endl;
        i--;
    }
    
    return 0;
}