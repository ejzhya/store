#include "manager.h"
#include <iostream>

//using namespace std;
void Manager::print(const string& _address) const{
    Employee::print();
    cout<<title<<endl;
    cout<< _address<<endl;
}