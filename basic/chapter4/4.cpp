#include <iostream>
using namespace std;

struct Point{//这个结构是声明，不是定义，定义是有结果的，变量、函数是东西
	float x;
	float y;
    void init(int x, int y){
        this->x=x;//this 是隐藏不用写
        this->y=y;//this 写代码技巧
    }
    void print() {
    cout<<this<<endl;
	cout <<this->x << "," << this->y << endl;
    }
    void move(int dx, int dy);//这个是函数声明
};

//以上内容都是声明
void Point::move(int dx, int dy) {//告诉编译器这是point的move,::是为了告诉是谁的
	x += dx;
	y += dy;
}//这个x看起来没有定义为什么编译正确，这个是inline函数
int main() {
	Point a, b;
	a.x = b.x = 1;
	a.y = b.y = 1;
	a.move(2, 2);
    a.print();//Point::print(&a);
    b.print();
	return 0;
}
//this 是一个关键字，所有类的成员有一个隐藏的函数this