//string
#include <iostream>
#include <string>
int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20]="jaguar";//create an initialized array 只有初始化时可以赋值一个字符串
    string str1;
    string str2="pather";//create an initialized string;
    cout<<"Enter a kind of feline:";
    cin>>charr1;//c语言中有： scanf("%s\n",str);输入字符串
    cout<<"Enter another kind of feline:";
    cin>>str1;
    cout<<"Here are some felines:\n";
    cout<< charr1<<" "<<charr2<<" "
    <<str1<<" "<<str2//use cout for output
    <<endl;
    cout<<"The third letter in "<<charr2<<" is"
    <<endl;
    cout<<"The third letter in "<<str2<<" is"
    <<str2[2]<<endl;//use array  notation
    string str3;
    str3="momo";
    str3=str3+str2;
    cout<<"\n";
    cout<<str3<<endl;
    return 0;
}