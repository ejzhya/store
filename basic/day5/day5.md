class 9:拷贝构造
编译器默认拷贝构造member
在构造的时候拷贝构造会发生，默认构造场合，函数返回值时传参进函数，
problem:
```c++
void f(){
    Stash Students();
}
```
这是函数原型声明，student is a function returns an object od Stash.
不是变量定义对象定义，Student()，（）即要传构造函数的参数，不能用默认构造函数，要把括号去掉，或者你是无参构造。
复习在class 10前