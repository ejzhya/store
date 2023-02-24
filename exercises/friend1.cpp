#include <iostream>
using namespace std;

class Person {
    // write your code here......
    public:
    friend void showAge(Person&);
    

    public:
        Person(int age) {
            this->age = age;
        }

    private:
        int age;
};

void showAge(Person& p) {//这只是一个普通的其他函数
    cout << p.age << endl;
}

int main() {

    Person p(10);
    showAge(p);

    return 0;
}