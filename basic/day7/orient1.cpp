#include <iostream>
using namespace std;

int  main(){
    cout<<"Hello\n";
    cerr<<"Bye-bye\n";//hello 和 bye从两个渠道出来//alt+f1 alt+f2 切换linux终端
    //./a.out 2> out  result:hello
    //./a.out 1> out  result:bye-bye
}