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
class 1:string pointer object 
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