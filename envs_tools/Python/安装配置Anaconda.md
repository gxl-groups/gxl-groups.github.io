---
title: 安装配置Anaconda
layout: default
nav_exclude: false
search_exclude: false
nav_order: 1
has_children: false
parent: Python常用工具安装配置
grand_parent: 常用环境工具软件
---
{: .no_toc}

<details open markdown="block">
  <summary>
    Table of contents
  </summary>
  {: .text-delta }
1. TOC
{:toc}
</details>




在安装或者使用Anaconda遇到问题的时候,先查文档,或者这个常见问题解决方法[Anaconda创建错误解决方法](https://docs.anaconda.com/anaconda/user-guide/troubleshooting/)





## 安装Anaconda

在Anaconda的官方文档有各个平台安装的注意事项,详情可以点击此处[Anaconda安装](https://docs.anaconda.com/anaconda/install/)



### 在windows上安装Anaconda

下载安装程序,根据安装程序的指示,通过点击进行安装.



#### 下载Anaconda安装程序



下载地址:[https://repo.anaconda.com/archive/Anaconda3-2022.05-Windows-x86_64.exe](https://repo.anaconda.com/archive/Anaconda3-2022.05-Windows-x86_64.exe)

#### 使用SHA-256验证下载的安装程序的完整性

[Hashes for Anaconda3-2022.05-Windows-x86_64.exe](https://docs.anaconda.com/anaconda/install/hashes/Anaconda3-2022.05-Windows-x86_64.exe-hash/)

`2766eb102f9d65da36d262b651777358de39fbe5f1a74f9854a2e5e29caeeeec`

具体的验证方法,可以参考这部分内容[Cryptographic hash verification](https://conda.io/projects/conda/en/latest/user-guide/install/download.html#cryptographic-hash-verification)

如果电脑上安装了PowerShell V4或者更靠后的版本:

通过`$PSVersionTable`命令可以查看.

打开Powershell然后输入下面的命令格式来进行验证:

```powershell
Get-FileHash Anaconda3-2022.05-Windows-x86_64.exe -Algorithm SHA256
```

执行的结果如下图所示:

![](https://s3.bmp.ovh/imgs/2022/06/28/7c5c3acd3135381a.png)



#### 双击运行安装程序

注意
{: .label .label-yellow  }

为了防止权限错误,不要把启动程序放到收藏夹文件夹下,比如`下载`文件夹
![image.png](https://s2.loli.net/2022/06/28/CTx7cOufk6spwJU.png)
上图Anaconda安装程序启动后的页面

#### 点击下一步`Next`

阅读许可协议并点击`I Agree`

![image.png](https://s2.loli.net/2022/06/28/q9xYbGpiCzB1UEX.png)

#### 选择安装选项为`Just Me`或`All users`,点击下一步

为所有用户安装通常需要管理员用户权限
![image.png](https://s2.loli.net/2022/06/28/ElwmiPRNktTGvdx.png)


选择安装Anaconda的文件夹,并点击下一步

警告
{: .label .label-red }



Anaconda的安装路径不能包含空格或者Unicode字符
![image.png](https://s2.loli.net/2022/06/28/23MwlcTY9EgkDzy.png)


除非需要管理员权限,否则不要以管理员身份安装



#### 选择是否需要将Anaconda添加到PATH环境变量中

官方的手册中建议不要将Anaconda添加到PATH环境变量中,因为这会干扰其它软件,建议通过开始菜单栏的`Anaconda Navigator`或者`Anaconda Prompt`来使用.
![image.png](https://s2.loli.net/2022/06/28/VyQ76Riaosbmd3z.png)


尽管如此,但是将anaconda添加到环境变量之后,后面使用`Windows Terminal`或者CMD来使用conda命令会方便很多



如果在安装的过程中没有添加Anaconda到环境变量,可以在安装完成后手动添加.
![image.png](https://s2.loli.net/2022/06/28/uTdjWsAoIXZ1Hx8.png)

具体方法如下:

1. 首先打开环境变量,并找到用户变量(`Just Me`)下的Path选项
2. 点击新建,新建一条Path变量
3. 选择浏览,通过文件资源管理器或者复制文件夹URL定位到Anaconda安装目录下的Scripts文件夹
4. 点击确定
5. 重新打开CMD,输入`conda`命令验证.
![image.png](https://s2.loli.net/2022/06/28/xiWZeDaUMsKAdBv.png)


#### 设置是否将其设置为默认的Python

如果计划安装运行过个版本的Anaconda或者Python,不用勾选这个选项



#### 点击`Install`等待安装完成

![image.png](https://s2.loli.net/2022/06/28/Pnjaxwvog1MWhfm.png)
这个过程可能会非常耗时,耐心等待

#### 点击`Next`

![image.png](https://s2.loli.net/2022/06/28/nreFMwR7D3Hpzm1.png)

#### (可选)安装JetBrains的DataSpell
![image.png](https://s2.loli.net/2022/06/28/DOjXr8qVHYL7slU.png)
#### 点击`Finish`完成安装

![image.png](https://s2.loli.net/2022/06/28/JQHCZgNo1G6ADmV.png)

如果想了解Anaconda更多信息,在点击确定之前,可以选中复选框跳转到对应的网页

可以在开始菜单栏中找到安装的anaconda,如下图所示
![image.png](https://s2.loli.net/2022/06/28/U4APxslJtyY9epz.png)

#### 验证安装

如果使用公司代理,需要进行一些额外的设置,参考下面这个指导:[Proxy](https://docs.anaconda.com/anaconda/user-guide/tasks/proxy/)



### 在Linux上安装Anaconda

为了使用GUI包,需要先安装Qt依赖.
对于*Debian*系列的发行版,可以通过下面的命令安装:
```bash
apt-get install libgl1-mesa-glx libegl1-mesa libxrandr2 libxrandr2 libxss1 libxcursor1 libxcomposite1 libasound2 libxi6 libxtst6
```

#### 下载[Anaconda Installer for Linux](https://www.anaconda.com/download/#linux)

选择运行于`x86`架构的发行版,在命令行通过命令:

```bash
wget https://repo.anaconda.com/archive/Anaconda3-2022.05-Linux-x86_64.sh
```
可以下载2022年05月份发行的x86-64架构下的linux发行版,如下图所示:
![image.png](https://s2.loli.net/2022/06/29/tfrPGpTiAkgVl7B.png)

#### 使用SHA256验证下载的安装程序的完整性

点击链接[Anaconda installer file hashes](https://docs.anaconda.com/anaconda/install/hashes/)选择linux,查看对应发行版的hash值.

打开终端,运行命令`sha256sum Anaconda3-2021.11-Linux-x86_64.sh`可以得到刚刚下载的安装程序的hash值,如下图所示:
![image.png](https://s2.loli.net/2022/06/29/49cn3dbqWmlJSpy.png)
和官网中给出的对应发行版的hash值进行比较,验证下载的安装程序是否完整

在运行`sha256sum`程序的时候记得将Anaconda installer的路径替换为终端当前目录的相对路径

#### 执行安装程序

`./Anaconda3-2021.11-Linux-x86_64.sh`

如果安装程序不是在终端所指示的当前目录下,更换为相对于当前终端路径的相对路径

如下图所示:
![image.png](https://s2.loli.net/2022/06/29/7DFkx3lay1i6fh9.png)

#### 键入Enter查看许可协议

#### 输入`yes`同意许可协议

如下图所示:
![image.png](https://s2.loli.net/2022/06/29/CsnOBQUd1AihWNj.png)


#### 选择安装的路径

在上面一步输入`yes`之后,就会进入到下面的选择安装路径操作:
![image.png](https://s2.loli.net/2022/06/29/X1PFN34rU2VSwjK.png)

安装程序提示键入Enter接受默认的安装路径,按CTRL-C取消安装,或者指定其它安装路径.

如果键入enter选择默认的安装路径,如下图所示:
![image.png](https://s2.loli.net/2022/06/29/nkWG1MDrjZtSxwu.png)
显示安装后的相对路径,安装过程需要等待一段时间

推荐使用默认的安装位置,不要使用`/usr`作为安装位置.

#### 初始化

当安装程序输出`Do you wish the installer to initialize Anaconda3 by running conda init?`,键入`yes`,如下图所示:


如果输入的是`no`,那么conda不会修改shell脚本,为了安装完成后的初始化,需要首先运行`source <path to conda>/bin/activate`,然后再执行`conda init`初始化

