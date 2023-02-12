#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int>v;
	for(int i=1;i<=5;i++)
		v.push_back(i);//向动态数组中插入1~5
	cout<<v.size()<<endl;//输出数组的大小，有几个值
	for(int i=0;i<5;i++)
		cout<<v[i]<<" ";//输山v[0]~v[4]，也就是1~5
	cout<<endl;
	v.clear();//将v清空，此时size为0
	v.resize(10);//为v重新开辟大小为10的空间，初始为0
    for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";//遍历每一个元素
	while(!v.empty())//当v还不空的话，去掉v的最后一个元素，等同于v.clear()
        v.pop_back();
    return 0;
}
