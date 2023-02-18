补充拷贝构造发生情况：  
1.使用创建好的对象初始化一个新对象  
```c++
Person1 person1;//没有构造函数，用系统默认构造函数，不会完全初始化
Preson2 person2();//构造函数是无参的进行无参构造
Person3 person3(10);//有参
Person3 person4(person3);//拷贝构造
Person3 person5;
person5=person3;//赋值不是拷贝构造  
```
2.值传递方式给函数参数传值  
```c++
void personname(Person3 p1){}//相当于Person3 p1=p
```
3.以值方式返回局部对象  
```c++
Person3 address()
{
    Person3 p1;
    return p1;

}
```