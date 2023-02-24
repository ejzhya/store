//再玩个简单的递归 recursion
//斐波那契数列 f(n)=f(n-1)+f(n-2)
#include <iostream>
using namespace std;

int getSum(int n);

int main() {

    int n;
    cin >> n;

    cout << getSum(n) << endl;

    return 0;
}
int getSum(int n){
    if (n==1||n==2){return 1;}
    else{
        return getSum(n-1)+getSum(n-2);
    }
}
// //我写的垃圾解法
// int getSum(int n) {

//     // write your code here......
//     int *p=new int[n];
//     int i; 
//     p[0]=1;
//     p[1]=1;
//     if(n-1==0||n-1==1){return 1;}
//     for (i=2;i<n;i++){
//         p[i]=p[i-1]+p[i-2];
//     }
//     return p[n-1];
// }