#ifndef _STRING_REP_H_
#define _STRING_REP_H_

#include"UCPointer.h"
#include "StringRep.h"

class String
{
    public:
    String(const char *s):m_rep(0)
    {
        m_rep=new StringRep(s);
    }
    ~String(){}
    String(const String &s):m_rep(s.m_rep){}
    String &operator=(const String &s)
    {
        m_rep=s.m_rep;//let smart pointer do work!
        return *this;
    }
    int operator==(const String &s)const
    {
        //overloaded->forwards to StringRep
        return m_rep->equal(*s.m_rep);//smart ptr *
    }
    String operator+(const String &) const;
    int length() const{
        return m_rep->length();
    }
    operator const char *() const;
    private:
    UCPointer<StringRep> m_rep;
};
#endif