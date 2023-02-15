//类模板
template <class T>
class Vector {
    public:
    Vector(int s):size(s){content=new T[s];}
    T& operator[] (int i);
    ~Vector(){delete[] content;cout<<"~Vector"<<endl;}
    private:
    T *content;
    int size;
};

// template <class T>//注意要重复写这句
// T& Vector<T>::operator[](int i){
//     return content[i];
// }
template <class T>//注意要重复写这句
T& Vector<T>::operator[](int i){
     return content[i];
 }
/////模板所有东西都要放在头文件，不能放在单独的cpp和inline一样
//所以正确答案是上面注释的取消注释，vector 删掉