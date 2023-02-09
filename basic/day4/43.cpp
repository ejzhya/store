#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<10;i++){
        static int m=1;//只赋值一次
        cout<<i<<endl;
        m=m+1;
        cout<<m<<endl;
    }
    return 0;
}