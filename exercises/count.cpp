#include <iostream>
// write your code here......
#include <set>
#include <map>

using namespace std;

int main() {

    char str[100] = { 0 };
    cin.getline(str, sizeof(str));

    // write your code here......
    set<char>s;
    for(int i=0;str[i]!='\0';i++){
        if('z'>=str[i]&&str[i]>='a'|| 'Z'>=str[i]&&str[i]>='A'){
        s.insert(str[i]);
        }
    }
    map<char, int>x;
    int count;
    for(auto i:s){
        count=0;
        for(int j=0;str[j]!='\0';j++){
            if (i==str[j])count++;
        }
        x.insert({i,count});
    }
    for(auto i:x){
        cout<<i.first<<":"<<i.second<<endl;
    }
    

    return 0;
}