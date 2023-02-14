//类模板
template <class T>
class Vector {
    public:
    Vector(int s):size(s){}
    T& operator[] (int i);
    private:
    T *content;
    int size;
};

template <class T>//注意要重复写这句
T& Vector<T>::operator[](int i){
    return content[i];
}