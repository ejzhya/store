#include "employee.h"
#include <iostream>
using namespace std;
void Employee::print() const {//const 位置用法
    cout<<name<<endl;
    cout<<ssn<<endl;
}