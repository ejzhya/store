chapter12：exceptions异常  
c文件大小查看 f.seek f.tell
文件打不开，文件不存在，文件被别的竞争的占用
try{logic}catch{error handle}  
throw 表达式  throw不带表达式，抛上次异常
error recovery
堆 栈 全局
有个小细节程序员的 throw new VIEE(10);//和 throw VIEE v

chapter13: smart pointor 主要目的为了实现自动的垃圾回收，当一个对象0个指针指着的时候他应该被清除掉，这里就用了一个引用计数reference count  
c++还没实现自动内存管理，关键是要实现自动内存回收，不需要delete  
string类的内部数据存储的自动回收

reference: a reference count is a count of the number of times an object is shared.  
The->Operator  
operator->() is a unary operator单目运算符
再解释一下 is a 和has a. is a 继承关系class base{...};class drivate:public base{...}; has a 是组合关系 class one{...};class two{private: class one;};  
主要内容c++ 如何实现引用计数:   
UCObject  
cat Makefile
