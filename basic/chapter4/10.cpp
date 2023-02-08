#include <iostream>

using namespace std;
#include <vector>

class Student {
    public:
    int x;
    Student(int k):x(k){};
};

int main(){
    vector<Student> ss;
    Student s(1);
    ss.push_back(s);
    cout<<ss[0].x<<endl;
    s.x=10;
    cout<<ss[0].x<<endl;
    return 0;

}