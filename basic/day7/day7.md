chapter12：exceptions异常  
c文件大小查看 f.seek f.tell
文件打不开，文件不存在，文件被别的竞争的占用
try{logic}catch{error handle}  
throw 表达式  throw不带表达式，抛上次异常
error recovery
堆 栈 全局
有个小细节程序员的 throw new VIEE(10);//和 throw VIEE v

chapter13: smart pointor
c++还没实现自动内存管理，关键自动内存回收，不需要delete  
stream类的内部数据存储的自动回收