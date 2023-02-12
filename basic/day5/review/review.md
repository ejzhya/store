polymorphic 多态
mutator
collection classes
inheritance
encapsulation
overriding
coupling
interface
template
iterators
ctors 构造函数
chapter 1:string pointer object 
动态分配空间new delete
new int()应该和new int 一样吧
注意删除的时候delete[] a;//a指针分配了长度为n的数组空间
assignment for string 中文意思分配？
concatenation for string 字符串的连接
为什么构造函数喜欢用引用string(const char& cp, int len);而不喜欢用指针string(const string* cp,int len);
chapter2:
repference 引用：
declaring references: char& r=c; type& refname = name;
rules of references:1.引用在定义时必须被初始化2.初始化时建立绑定
int x=3;
int& y=x;
const int& z=x;//这个不能被改变  
对于函数形参argument：
void f(int& x);
f(y);//initialized when function is called;
void f(int*& p);//指针的引用
int&* p;//指向引用 illegal
stash:Stash is a container that stores objects and can be expanded during running.
Container is an object taht hold other objects.
For most kinds of containers, the common interface is put() and get().
this: the hidden parameter
void Stash::initialize(int sz)=====void Stash::initialize(Stash* this, int sz)
Stash a;  
a.initialize(10);=======Stash::initialize(&a,10);
chapter 3: head file ;compile unit;Declarations vs Definitions ;function overloading 
definition of a class:1. .h：class declaration and prototypes;
.cpp文件:function body;
compile unit:1.The compiler sees only one .cpp file, and
generates .obj file2.The linker links all .obj into one executable
file3.To provide information about functions in
other .cpp files, use .h    
Standard header file structure:  
```c++
#ifndef HEADER_FLAG
#define HEADER_FLAG
#endif
```  
作用：#ifndef起到的作用是防止一个源文件两次包含一个头文件。假如你有一个c源文件，它包含了多个头文件：头文件A和头文件B，而头文件B又包含了头文件A，则最终的效果是，该源文件包含了两次头文件A。若在头文件A中定义了结构体或者类类型，编译时会报大量的重复定义错误。所以要用到# ifndef 与#endif，当第一次包含该头文件时，由于没有定义，条件为真，这样就会包含# ifndef 与#endif之间的代码，，当第二次包含头文件，前面已经定义好了，条件为假，# ifndef 与#endif之间的代码也不会再次包含，这样就避免重复定义了。
总结来说：
条件指示符#ifndef的最主要目的是防止头文件的重复包含和编译。条件编译当然也可以用条件语句来实现， 但是用条件语句将会对整个源程序进行编译，生成的目标代码程序很长，而采用条件编译，则根据条件只编译其中的程序段1或程序段2，生成的目标程序较短。如果条件选择的程序段很长，采用条件编译的方法是十分必要的。  
`clock display as homework`  
function overloading 函数重载：same function with different arguments list  
相同的函数名有不同的形参，类中会根据输出的形参选择合适的函数  
default argument 函数的默认参数要放在声明里面且从右往左写 int harpo(int n,int m=4,int j=5);
class 4: container，STL c++标准库，类似python的库
Collection objects are objects that can store an
arbitrary number of other objects.
the three parts of STL:  
1.containers:Vector、Deque、List、Sets and Maps(HashMap)  
2.Algorithms:some basic Algorithms(sort,search)
3.Iterator:like Vector<int>::iterator p;//a pre-defined iterator for  vector class, can use it to print out the items in  vector;   

class 5:namespace,const,global,static
Student* f();//指针指向？返回一个指向类的指针
Student& f();//引用引谁？返回成员

void Student::say(){} 类里的函数，外部，：：作用域
