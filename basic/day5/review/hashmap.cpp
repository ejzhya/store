#include <map>
#include <string>
#include <iostream>
using namespace std;
int main(){
map<string,float>price;
price["snapple"]=0.75;
price["coke"]=0.50;
string item;
double total;
cout<<"input your manu: ";
cin>>item;
while(item!="end"){total+=price[item];cout<<"input your manu: ";cin>>item;}
cout<<"your bill: "<<total<<endl;
return 0;
}