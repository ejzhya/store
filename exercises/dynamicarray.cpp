//今天玩一下二维的动态数组
//两种方法指针数组和数组指针
//题目输入一个正整数 nn，创建大小为 n*nn∗n的二维数组aa（采用动态数组的方式），
//将a[i][j]a[i][j]初始化为i+ji+j(0 \le i <n,0 \le j <n)(0≤i<n,0≤j<n)。
//并输出数组中的元素。
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // write your code here......
    //1.指针数组
    int **arrayptr=new int*[n];//指向int*的指针，分配int*大小的n个空间
    for(int i=0;i<n;i++){
        arrayptr[i]=new int[n];//arrayptr的每个元素指向int的指针，分配n个int大小的空间
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arrayptr[i][j]=i+j;
            cout<<i+j<<" ";
        }
        cout<<endl;
    }
    //注意内存释放
    for(int i=0;i<n;i++){
        delete [] arrayptr[i];
    }
    delete[] arrayptr;
    cout<<"---------------------"<<endl;
    //2.数组指针
    //auto arrayptr2=new int[n][n];//error 第二个n必须是const
    //int (*arrayptr)[n]=new int[n][n];//同上
    //这题还是用指针数组好了

}