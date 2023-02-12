// #include <iostream>
// using namespace std;

// class A{
//     public:
//     A(){}
//     int i=10;
//     ~A(){}
// };
// A* f(A* a2){
//     cout<<a2->i<<endl;
//     return a2;
// }
// A& f2( A &a3){
//     cout<<a3.i<<endl;
//     return a3;
// }
// int main(){
//     A* a;
//     A* b;
//     A* c;
//     A* d;
//     A e;
//     A k;
//     b->i=2;
//     a=f(b);
//     cout<<"-----------"<<endl;
//     cout<<a->i<<endl;
//     d->i=15;
//     c=f2(b);
//     cout<<c->i<<endl;
//     return 0;

// }
#include <iostream>
#include <string>//A类引用返回值不对还未解决

using namespace std;

string& Test(string &temp_str)	  // 定义函数的返回值为引用类型
{
	return temp_str;
}
int main()
{
	string test("Hello world!");
	auto out_put = Test(test);
	cout << out_put << endl;
}