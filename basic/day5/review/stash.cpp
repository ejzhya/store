//stash and this:the hidden pointer,pointer to variable local variable,need not define,use it directly.
#include <iostream>//文件输出输入流头文件

using namespace std;

class Stash{
    private:
    int size;
    int quantity;
    int next;
    unsigned char* storage;
    public:
    Stash(int _size, int _quantity,int _next, unsigned char* _storage):
    size(_size),quantity(_quantity),next(_next),storage(_storage){cout<<"Stash()"<<endl;};
    void f()const{cout<<"_size+_next:"<<this->size+this->next<<endl;}
    ~Stash(){cout<<"~Stash"<<endl;}
};
int main(){
    unsigned char* p0=(unsigned char*)"Hello";
    Stash* p=new Stash(1,2,3,p0);
    p->f();
    delete p;

    return 0;
}