#include <iostream>
using namespace std;
#include "12.h"
// void f(int a,int b=0){//默认值
//     cout<<a<<","<<b<<endl;
// }
void f(int a,int b){//默认值不能加载函数定义处
    cout<<a<<","<<b<<endl;
}

