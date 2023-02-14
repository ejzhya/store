chapter 10:
copy ctor拷贝构造 when are copy ctors called?
1.During initialization 2. During function rerturn
overloaded operators 运算符重载，

chapter11:overloaded operators, stream extractor, manipulate
value classes
opteration convertion,在构造函数前加explicit表明该构造函数只能显示构造不能转换  
C++中的explicit关键字只需用于修饰只有一个参数的类构造函数, 它的作用是表明该构造函数是显示的, 而非隐式的， 跟它相对应的另一个关键字是implicit, 意思是隐藏的,类构造函数默认情况下即声明为implicit(隐式)。   
左值 vs 右值
std::move()把任何类型变成右值 应用移动构造 具体。。。

chapter 12：模板template元代码
untyped list:stash  
Function Template 函数模板 Class Template 类模板
