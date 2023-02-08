#include <iostream>
using namespace std;
class Point {
private:
    float x;
    float y;
public:
    Point(int x,int y);
    ~Point(){
        cout<<"~";
        print();
    }
    void print();
    void move(int dx, int dy);
};

Point::Point(int x, int y){
    this->x =x;
    this->y=y;

}

void Point::print(){
    cout<<"print()"<<hex<<this<<dec<<endl;
    cout<< x<<","<<this->y<<endl;
}
void Point::move(int dx, int dy){
    x+=dx;
    y+=dy;
}
int main(){
    Point a(1,2),b(3,4);//利用构造函数直接赋值，构造函数是初始化函数，是对象空间分配后赋值。
    //Point *P =new Point(5,6);//1.new 申请了一块空间可以放下一个对象，2.构造函数赋值
    a.move(2,3);
    cout<<hex<<&a<<dec<<endl;
    cout <<hex<<&b<<dec<<endl;
    a.print();
    b.print();
    return 0;
}