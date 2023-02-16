#ifndef _STRINGREP_H_
#define _STRINGREP_H_

#include "UCObject.h"
#include <cstring>
#include <iostream>
using namespace std;

class StringRep : public UCObject
{
    public:
    StringRep(const char *s)
    {
        if (s){
            int len=strlen(s)+1;
            m_pChars= new char[len];
            strcpy(m_pChars,s);
        }
        else{
            m_pChars= new char[1];
            *m_pChars='\0';//空字符串，方便写代码
        }
    }
    ~StringRep(){
        delete[] m_pChars;
}
StringRep(const StringRep &sr)
{
    int len=sr.length();
    m_pChars=new char[len+1];
    strcpy(m_pChars,sr.m_pChars);
}
int length() const
{
    return strlen(m_pChars);
}
int equal(const StringRep &sp) const{
    return (strcmp(m_pChars,sp.m_pChars)==0);
}
void ff(){cout<<m_pChars<<endl;}
private:
char *m_pChars;
void operator=(const StringRep&){}
};
#endif