#include <iostream>
int main(){
    using namespace std;
    const int lbs_per_stn=14;
    int lbs,d,e,f;
    double a,b,c;
    lbs=3;
    a=lbs;
    b=lbs_per_stn/lbs;
    c=lbs_per_stn/a;
    d=c;
    e=int(c);
    f=(int)c;//纯粹c++数据类型强制转换
    cout<<b<<":"<<c<<endl;
    cout<<d<<":"<<e<<"f="<<f<<endl;
    return 0;//整形运算还是整形，要换成double形才会有小数
}