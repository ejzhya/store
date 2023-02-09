#include "employee.h"
#include"manager.h"

int main(){
    Employee p1("John Smith","123456");
    Manager p2("Tom jordan","65432","Mr.");
    p1.print();
    p2.print("xiaoshan");
    p1.print("welcom:");
    //p2.print("w:");
}