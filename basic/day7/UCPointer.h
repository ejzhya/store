//smart pointer 
#ifndef _UCPOINTER_H_
#define _UCPOINTER_H_

template <class T>
class UCPointer//来指向UCO
{
    private:
    T *m_pobj;
    void increment(){
        if (m_pobj)m_pobj->incr();
    }
    void decrement()
    {
        if (m_pobj)m_pobj->decr();
    }
    public:
    UCPointer(T *r=0):m_pobj(r){
        increment();
    }
    ~UCPointer(){
        decrement();
    }
    UCPointer(const UCPointer<T> &p){//s2=s1
        m_pobj=p.m_pobj;
        increment();
    }
    UCPointer &operator=(const UCPointer<T> &p){//赋值
        if(m_pobj!=p.m_pobj){
            decrement();//a=b; 计数时引用a+1,b-1
            m_pobj=p.m_pobj;
            increment();
        }
        return *this;
    }
    T *operator->() const{//->单目运算
        return m_pobj;
    }
    T &operator*() const{//&左值
        return *m_pobj;

    }

};

#endif

// //test code
// Ellipse ell(200F,300F);
// UCPointter<Shape>p(&elly);
// p->render();//calls Ellipse::render() on elly!