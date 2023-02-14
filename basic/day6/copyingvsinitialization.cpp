#include <iostream>
using namespace std;

class Fi{
    public:
    Fi(){}
};

class Fee{
    public:
    Fee(int){}
    Fee(const Fi&){cout <<"Fee(Fi)"<<endl;}
    Fee(const Fee&){cout<<"Fee(Fee)"<<endl;}//拷贝构造函数
    Fee& operator=(const Fee&){cout<<"Fee="<<endl;return *this;}//重载赋值运算符
};//注意*this
// int main(){
//     Fee fee=1;//Fee(int)
//     Fi fi;
//     Fee fum=fi;//Fee(Fi)
//     cout<<"btw"<<endl;
//     fum=fi;
//     return 0;
// }
int main(){
    Fee fee=1;//Fee(int)
    Fi fi;
    Fee fum=fee;//Fee(Fi)这里是初始化
    cout<<"btw"<<endl;
   // fum=fee;//这里是赋值
    fum=fi;
    return 0;
}