#include <iostream>
using namespace std;

// 点类
class Pointer {

    private:
        int x;  // x 坐标
        int y;  // y 坐标

    public:
        void setX(int x) {
            this->x = x;
        }

        int getX() {
            return x;
        }

        void setY(int y) {
            this->y = y;
        }

        int getY() {
            return y;
        }

};

// 圆类
class Circle {

    private:
        Pointer center; // 圆心
        int radius; // 半径

    public:
        void setCenter(int x, int y) {
            center.setX(x);
            center.setY(y);
        }

        void setRadius(int radius) {
            this->radius = radius;
        }

        void isPointerInCircle(Pointer& p){
            int px,py;
            px=p.getX();
            py=p.getY();
            int result;
            result=(px-center.getX())*(px-center.getX())+(py-center.getY())*(py-center.getY());
            int pradius=radius*radius;
            if (pradius>result)cout<<"in"<<endl;
            else if(pradius<result)cout<<"out"<<endl;
            else cout<<"on"<<endl;

        }
        // write your code here......
        

};

int main() {

    // 键盘输入点的坐标
    int x, y;
    cin >> x;
    cin >> y;

    // 创建一个点
    Pointer p;
    p.setX(x);
    p.setY(y);

    // 创建一个圆
    Circle c;
    c.setCenter(5, 0);
    c.setRadius(5);

    // 判断点和圆的关系
    c.isPointerInCircle(p);

    return 0;
}