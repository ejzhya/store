//到时候再写
//环形静态队列queue
//queue线性存储结构，First in First out. FIFO结构
//好吧，抄的
template <class T>
class CircleQueue{
    public:
    CircleQueue(int c=10);
    ~CircleQueue();

    bool isEmpty();
    int size();
    bool push(T t);
    T pop();
    T front();//队首元素

    private:
    int capacity;
    int begin;
    int end;
    T *queue;
};
template <class T>//这里函数定义的时候不能写默认参数
CircleQueue<T>::CircleQueue(int c):capacity(c),begin(0),end(0),queue(nullptr){
    queue=new T[capacity];
}

template <class T>
CircleQueue<T>::~CircleQueue(){
    delete[] queue;
}

template <class T>
bool CircleQueue<T>::isEmpty(){
    if(begin==end)return true;
    return false;
}

template<class T>
int CircleQueue<T>::size(){
    return (end-begin)%capacity+1;
}

template<class T>
bool CircleQueue<T>::push(T t){
    if ((end+1)%capacity==begin){
        return false;
    }
    queue[end]=t;
    end=(end+1)%capacity;
    return true;
}

template<class T>
T CircleQueue<T>::pop(){
    if (end==begin){
        throw "Empty";
    }
    T temp=queue[begin];
    begin=(begin+1)%capacity;
    return temp;
}

template<class T>
T CircleQueue<T>::front(){
    if(end==begin)throw "empty";//为空
    return queue[begin];
}

