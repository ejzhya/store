####the usage of cmath
```c++
#include <iostream>
#include <cmath>
int main(){
    using namespace std;
    double area,side;
    cout<<"Enter the floor area, in square feet, of your home: ";
    cin>>area;
    side =sqrt(area);
    cout << "That's the equivalent of a square "<<side 
        <<"feet to the side."<<endl;
    cout << "How fascinating!"<<endl;
    return 0;
}
```
:smile:   :smile:
<div align='left'>
<img src=ai3.jpg width=50% />
</div>
#### basic grammar
>//**bool** variable true or false
>//非0即true
>//**const** 常量限定符，*const int Months =12*; 初始化后编译器将不允许修改该常量
>//const 某些地方比 #define 方便在c++；定义符号常量用const
>cout.setf()
>cout.setf(ios_base::fixed, ios_base::floatfield);//fixed-point 规定输出精度的
```c++
#include <iostream>
int main(){
    using namespace std;
    //cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub=10.0/3.0;
    double mint=10.0/3.0;
    const float million=1.0e6;
    cout<<"tub= "<<tub;
    cout<<",a million tubs= "<<million*tub;
    cout<<",\nand ten million tubs= ";
    cout<<10*million*tub<<endl;
    cout <<"mint= "<<mint<<"and a million mints= ";
    cout << million*mint<<endl;
    return 0;
}
```
整型截取int 
int debt(3.9832)
类型转换：
```c++
#include <iostream>
int main(){
    using namespace std;
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    float tree=3;
    int guess(3.9832);
    int debt =7.2;//int 类型无法储存7.2E12
    cout<<"tree= "<<tree<<endl;
    cout<<"guess= "<<guess<<endl;
    cout<<"debt= "<<debt<<endl;
    return 0;

}
//result tree= 3.000000
//guess= 3
//debt= 7
```
c面向过程，c++面向对象opp
opp程序设计方法首先设计类，将数据和方法合并为类定义


