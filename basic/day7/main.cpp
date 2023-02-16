#include <iostream>
using namespace std;

#include "String.h"

int main()
{
    cout<<"Hello\n";
    String a="Hello";
    String b=a;
    b=a;
    b="bye";
    cout<<(a==b)<<endl;
}