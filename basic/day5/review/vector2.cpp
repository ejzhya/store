//STL c++标准库: std是标准库的 名字空间
//以下代码取自cnds 
#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> v{0,1,2,3,4};
	v.erase(v.begin()+3);//删除v[3],v变为{0,1,2,4}
	v.insert(v.begin()+3,666);//在v[3]前加上666,v变成{0,1,2,666,4}
	v.front()=10;//将v[0]改成10，等同于v[0]=10;
	v.back()=20;//将v[4]改成20等同于v[v.size()-1]=20;
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";//使用下标访问的方法遍历v
	cout<<endl;
 	for(auto i=v.begin();i!=v.end();i++)
	cout<<*i<<" ";//使用迭代器，从v.begin()到v.end()-1
	cout<<endl;
	for(auto i:v)//使用C++新特性循环遍历v，如果需要改变i的值，还需要在前面加上&
	cout<<i<<" ";
	cout<<endl;
	return 0;
}
