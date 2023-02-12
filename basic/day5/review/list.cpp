//list c++ stl
#include <iostream>
using namespace std;
#include <list>
#include <string>
int main(){
    list<string> s;
    string t;
    list<string>::iterator p;
    for (int a=0; a<5;a++){
        cout<<"enter a string: ";
        cin>>t;
        p=s.begin();
        while (p!=s.end()){
            p++;  
        }
        s.insert(p,t);//这个要放while外面不知道为什么
    }
    for (p=s.begin(); p!=s.end();p++) cout<<*p<<" ";
    //Cannot use p < s.end( ) as
    //with vectors, as the list
    //elements may not be
    //stored in order
        cout<<endl;
    

  
            return 0;
}