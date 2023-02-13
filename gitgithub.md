#### ubuntu（或win下wsl系统）下连接GitHub使用git
##### url法
1.首先创建你要连的文件比如mycode（后面写代码会在这个文件中进行）和一个你要上传的测试文件hello.md
```
sudo apt-get install git
mkdir mycode && cd mycode
git init
touch hello.md
```
2.注册github并创建一个仓库 a new repository
3.添加远程仓库
```
git remote add [repository_name] [url]
如：git remote add store https://github.com/ejzhya/store
```
4.vscode中选择changes 中的要上传到缓存区的文件例如hello.md 点击`+`
Message 处填入名字 `first` 点击`commit`此时存入本地，点击`···`处 选择`push to...` 选择要上传的仓库。
##### ssh法（我用的这种，上面那种试了以后感觉不实用）
1.生成ssh的一对钥匙  
先执行c看有没有已生成的公钥，没有则：  
a.`id_rsa` `id_rsa.pub`   
b.`ssh-keygen -t rsa "email"`  
c.`ls -a`在隐藏文件`/home/.ssh/id_rsa.pub`下复制公钥,`放到github的ssh钥匙设置里  

2.git  
#install git  
`sudo apt-get install git`  
#选择你后面要上传代码的文件进行git仓库初始化  
`git init`  
#选择你要上传到缓存去的文件  
`git add file  or git add ./`  
#`git status` 查看状态  
#推送至本地仓库  
`git commit -m "banchname"` 
#推送至远程仓库，创建地址 origin是自己给远程仓库取的名字  
`git remote add origin git@github.com:ejzhya/fight.git`  
#将master分支推送至你的远程仓库origin  
`git push origin master`  
#出现提示错误`can't be established`  
写yes  注意不要只写y  

#详情看https://blog.csdn.net/ajianyingxiaoqinghan/article/details/70544159 <br>
#### Can't push refs to remote try running pull first to integrate your changes
`You get this try running pull first to integrate your changes whenever your local branch and your remote branch are not on the same point, before your changes.`
```
解决方案：
git pull --rebase origin branchname
git push origin branchname
```