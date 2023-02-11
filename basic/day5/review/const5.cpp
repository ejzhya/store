#include <iostream>

using namespace std;

class Point{
    public:
    Point(int _x,int _y):x(_x),y(_y){cout<<"Point()"<<endl;};
    void move(int dx,int dy);
    void print() const;
    ~Point(){cout<<"~Point"<<endl;};
    private:
    int x;
    int y;
};

void Point::move(int dx,int dy){
    x=x+dx;
    y+=dy;
}
void Point::print()const{
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
}
int main(){
    Point* p=new Point(1,2);//要用delete 然后会执行析构函数再释放空间
    p->move(2,2);//注意指针和下面的直接对象的运算符->和.
    p->print();
    delete p;
    cout<<"-----------"<<endl;
    Point p2(0,0);//程序结束自动执行析构函数
    p2.move(2,2);
    p2.print();
    return 0;
}
