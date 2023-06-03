// pass by reference
//pass by pointer

#include <iostream>
using namespace std;
class add{
public:
    add(double _x):x(_x){}
    virtual void absum(add& b){
        sum=x+b.x;
        b.x+=1;//reference 把b.x值变了
    }
    virtual void set0(add* c){
        c->x=0;
    }
    double sum;
    double x;
private:
    
    

};

int main(){
    add p1(3.1);
    add p2(2.2);
    double sum_x;
    p1.absum(p2);
    sum_x=p1.sum;
cout<<"---------------------"<<endl;
cout<<"sum"<<sum_x<<endl;
cout<<"b_x(reference)"<<p2.x<<endl;
p1.set0(&p1);
cout<<"p1set0="<<p1.x<<endl;
    return 0;
}
//pointer 对内存的直接管理，但也会出现bug,reference简化，但无法替代。 