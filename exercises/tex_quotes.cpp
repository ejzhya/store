#include <iostream>
using namespace std;

class Cube {

    // write your code here......
    private:
    int length,width,height;
    public:
    Cube(){}
    ~Cube(){}
    void setLength(int _length){
        length=_length;
    }
    void setHeight(int _height){
        height=_height;
    }
    void setWidth(int _width){
        width=_width;
    }
    int getLength(){
        return length;
    }
    int getHeight(){
        return height;
    }
    int getWidth(){
        return width;
    }
    int getArea(){
        return 2*(length*height+length*width+height*width);
        
    }
    int getVolume(){
        return length*width*height;
    }


};

int main() {

    int length, width, height;
    cin >> length;
    cin >> width;
    cin >> height;

    Cube c;
    c.setLength(length);
    c.setWidth(width);
    c.setHeight(height);

    cout << c.getLength() << " "
        << c.getWidth() << " "
        << c.getHeight() << " "
        << c.getArea() << " "
        << c.getVolume() << endl;

    return 0;
}
