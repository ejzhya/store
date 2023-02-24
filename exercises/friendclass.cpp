#include<iostream>
using namespace std;
class phone{
	// write your code here......
	public:
	friend class myphone;//声明myphone是朋友，友元类
	private:
		int price;
	public:
		phone(int x){
			price=x;
		}
}; 
class myphone{
	private:
		phone a;
	public:
		myphone(int x):a(x){
		}
		int getprice(){
			return a.price;
		}
};
int main(){
	int p;
	cin>>p;
	myphone a(p);
	cout<<a.getprice();
	return 0;
}