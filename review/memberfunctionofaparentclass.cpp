#include <iostream>
#include "memberfunctionofaparentclass.h"
//using namespace std;
int main(){
B b;
b.f();
b.A::f();
return 0;
}