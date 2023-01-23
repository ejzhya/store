#### ubuntu（或win下wsl系统）下连接GitHub使用git
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