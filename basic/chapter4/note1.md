dynamic memory allocation
new  
new int;  
new Stash;
new int[10];
delete:
delete p;
delete [] p;
dynamic arrays:
int *psome = new int [10];//创建一个int型指针，空间为10*int字节,是长度为10的数组指针
delete [] psome;//pree the whole array
int *p= new int;
int *a=new int[10];
Student *q=new Student();
student *r=new Student[10];//10个student类的指向类的指针，delete q 会先进行析构函数再删除

object=attributes+services

