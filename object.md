oop characteristics
1.Everything is an object.
2.A program is a bunch of objects telling each other what to do by sending messages.
3.Each oject has its own memory made up of other objects.
4.Every object has its own memory made up of other objects.
5.All objects of a particular type can receive the same messages.

平时所声明的类只是一种类型定义，本身没有大小，使用sizeof运算符得到的是该类型对象的大小。类所占用的大小是由数据成员决定的，成员函数是属于公共部分，不计算在内
首先，类大小的计算遵循结构体的对齐原则
类的大小与普通数据成员有关，与成员函数和静态成员无关。即普通成员函数，静态成员函数，静态数据成员，静态常量数据成员均对类的大小无影响
虚函数对类的大小有影响，是因为虚函数表指针带来的影响
虚继承对类的大小有影响，是因为虚基表指针带来的影响
空类的大小是一个特殊情况,空类的大小为1