#include <iostream>
using namespace std;
#include "vector.h"

int main(){
    Vector<int> v(10);//这个大写的Vector不是自带的那个
    for (int i=0;i<10;i++){
        v[i]=i;
    }
    for (int i=0;i<10;i++){
        cout<<v[i]<<endl;
    }

}
