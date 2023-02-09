#ifndef __MANAGER_H_
#define __MANAGER_H_
#include "employee.h"
//
//employ里面有string等头文件这里不用了
class Manager: public Employee{
    public://注意要写public不然默认是private 访问不了
    Manager(const string& _name,const string& _ssn,const string& _title):
    Employee(_name,_ssn),title(_title){}
    const string& getTitle() const {return title;}
    void print(const string& _address) const;
    protected:
    string title;
};
#endif