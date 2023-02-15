#ifndef _UCOBJECT_H_
#define _UCOBJECT_H_

#include <assert.h>
class UCObject
{
    public:
    UCObject():m_refCount(0){}
    virtual ~UCObject()
    {
        assert(m_refCount==0);//防止其他程序员使用错误析构，断言析构时m_ref....要为0，不然异常
    }
    UCObject(const UCObject &):m_refCount(0){}
    void incr()
    {
        m_refCount++;
    }
    void decr()
    {
        m_refCount-=1;
        if (m_refCount==0)
        {
            delete this;
        }
    }
        int references()
        {
            return m_refCount;
        }
        private:
        int m_refCount;
    };
    #endif
  