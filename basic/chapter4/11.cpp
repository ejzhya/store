#include <iostream>
using namespace std;
class A{
    private:
    int i = 10;
    public:
    A():i(11){
        cout<<i<<endl;
    }
};
int main(){
    A a;
    return 0;
}