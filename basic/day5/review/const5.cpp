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
    Point* p1=new Point[2]{{2,3},{4,5}};//对象数组初始化
    p->move(2,2);//注意指针和下面的直接对象的运算符->和.
    p->print();
    delete p;
    cout<<"------------------use"<<endl;
    p1[0].print();
    p1[1].print();
    delete[] p1;
    cout<<"-----------"<<endl;
    Point p2(0,0);//程序结束自动执行析构函数
    p2.move(2,2);
    p2.print();
    return 0;
}
