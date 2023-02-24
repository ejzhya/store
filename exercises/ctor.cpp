//拷贝构造深拷贝和浅拷贝
#include <iostream>
#include <cstring>

using namespace std;

class Person {

    public:
        char* name; // 姓名
        int age;    // 年龄

        Person(const char* name, int age) {
            this->name = new char[strlen(name) + 1];
            strcpy(this->name, name);
            this->age = age;
        }

        // write your code here......
        Person(const Person& r){
            this->name=new char[strlen(r.name)+1];
            strcpy(this->name, r.name);
            this->age=r.age;
            
        }
        

        void showPerson() {
            cout << name << " " << age << endl;
        }

        ~Person() {
            if (name != nullptr) {
                delete[] name;
                name = nullptr;
            }
        }

};

int main() {

    char name[100] = { 0 };
    int age;

    cin >> name;
    cin >> age;

    Person p1(name, age);
    Person p2 = p1;

    p2.showPerson();

    return 0;
}