>win+vscode还没有成功 json配置要用minwin,有点麻烦毕竟Ubuntu系统下比较快<br>
>方法https://blog.csdn.net/Zhouzi_heng/article/details/115014059<br>
>ubuntu+vscode比较简单 方法：https://blog.csdn.net/fangshuo_light/article/details/123635576<br>
>visual stdio 比较适合做一个完整的项目，所有cpp默认一起编译，故先从vscode开始，用命令比较方便。

以下为Ubuntu(wsl2)+vscode
1.install vim
`sudo apt-get install vim`<br>
2.install g++<br>
sudo apt install g++<br>
3.install c++扩展项插件 一个，extension<br>
4.更改launch.json 更改tasks.json file<br>
注意显示错误`"miDebuggerPath": "/usr/bin/gdb"`miDebuggerPath地址错误，你可能没有下载gdb
`sudo apt-get install gdb`
<br>
git 命令补充
branchname 像一开始的main,后面默认push到main里面
#### 1.create new branch name<br>
`git branch`分支名<br>但此时head指针依然指向主分支master<br>
#### 2.切换分支
`git checkout 分支名`查看切换是否成功`git log --decorate --oneline`<br>
#### 3.查看分支
`git log --decorate --oneline`一行显示`git log --decorate --oneline --graph -all`图像化<br>
#### 4.创建并且切换分支
`git checkout -b 分支名`<br>
>https://blog.csdn.net/xiaojinguniang/article/details/86063844