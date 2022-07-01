---
title: Pycharm安装
layout: default
nav_exclude: false
search_exclude: false
nav_order: 3
has_children: false
parent: Python
---
<details open markdown="block">
  <summary>
    Table of contents
  </summary>
  {: .text-delta }
1. TOC
{:toc}
</details>

## Python环境的配置

### 1.下载python

[https://www.python.org/getit/](https://www.python.org/getit/)

![image-20220630154150622.png](https://s2.loli.net/2022/06/30/m2DQF5jpnEHxKJu.png)

### 2.安装python

 ![image-20220630154330657.png](https://s2.loli.net/2022/06/30/boXJAfSeQF5hMCa.png)

 ![image-20220630154447506.png](https://s2.loli.net/2022/06/30/mzE8ClhDU27xS5J.png)

 ![image-20220630154705252.png](https://s2.loli.net/2022/06/30/1cLv4qOTplYdsnX.png)

### 3.检验是否安装成功

![image-20220630154751054.png](https://s2.loli.net/2022/06/30/juoL7dR8X6NTlIz.png) 

## Pycharm的安装

### 1.下载

[https://www.jetbrains.com/pycharm/download/#section=windows](https://www.jetbrains.com/pycharm/download/#section=windows)

![image-20220630154957781.png](https://s2.loli.net/2022/06/30/rQNfkGBjLpZxa6e.png) 

### 2.安装

在这里选择安装目录，此为默认

![image-20220630155051677.png](https://s2.loli.net/2022/06/30/DSVQZivHKGxmdLq.png) 

![image-20220630155124097.png](https://s2.loli.net/2022/06/30/Odr3mkpZ6aK59CR.png) 

### 3.基础使用—Helloworld

<img src="https://s2.loli.net/2022/06/30/ThVzBOErIGv41ou.png" alt="image-20220630155717309.png" style="zoom:67%;" /> 

<img src="https://s2.loli.net/2022/06/30/Cyx2KZNrGTwmqfn.png" alt="image-20220630155849304.png" style="zoom:67%;" /> 

输入如下代码之后，使用快捷键 Ctrl+shift+F10运行代码，或者使用右上角的小三角图标

![image.png](https://s2.loli.net/2022/06/30/naHWUhEbKIs5BtT.png) 

运行效果如下图所示

<img src="https://s2.loli.net/2022/06/30/G6MmObnT7oiD2rd.png" alt="image-20220630160310129.png" style="zoom:67%;" /> 

### 4.几个库的基本使用

#### （1）NumPy

NumPy提供了可以进行数组和矩阵计算的基本方法

导入NumPy

```python
import numpy as np
```

生成NumPy数组

```python
x = np.array([1.0, 2.0, 3.0])
print(x)
```

NumPy的算术运算

```python
x = np.array([1.0, 2.0, 3.0])
y = np.array([2.0, 4.0, 6.0])
print(x + y)
```

![image.png](https://s2.loli.net/2022/06/30/mGAD48FQyitEwsl.png) 

#### （2）Matplotlib

用于图形的绘制和数据的可视化

导入Matplotlib包

```python
import matplotlib.pyplot as plt
```

注意：当没有这个包的时候，要安装，如下图所示

![image.png](https://s2.loli.net/2022/06/30/ui1bTzhcLoFJkDZ.png) 

安装成功后，右下角会报相应提示，并且红色线去掉了

![image.png](https://s2.loli.net/2022/06/30/iVnYsMaGWykoNIj.png) 

绘制sin函数图像

```python
x = np.arange(0, 6, 0.1) # 生成以0.1为单位，0~6的数据
y = np.sin(x)
plt.plot(x, y)
plt.show()
```

<img src="https://s2.loli.net/2022/06/30/TabHurMpondmxYB.png" alt="image.png" style="zoom:67%;" /> 

### 5.kmeans实例

K-means是一个聚类算法，是随机选k个初值向量，然后遍历全部数据集，计算它们与初值向量的距离，然后划分到对应的类里面，遍历一遍之后再计算初值向量，最后重复这些操作，直到最后计算的初值向量没什么大改变即停止训练。

一般遇到陌生的代码，不知道它是什么原理的时候可以先打断点，一步一步的看代码是如何运行的。

![image.png](https://s2.loli.net/2022/06/30/vaXZnPSMhFJTwqD.png) 

点击按钮进行调试

![image.png](https://s2.loli.net/2022/06/30/hmU1NKy2qTVEcfG.png) 

可见该图中间有几个按钮，在调试中经常会用到这里 ![image.png](https://s2.loli.net/2022/06/30/Ned1ZRwWEFPOpsh.png)

![image.png](https://s2.loli.net/2022/06/30/gQik4KNwZdTA6Gs.png) 

①Step Over（F8）：把子函数整个做成一步，不会进入该函数；

②Step Into（F7）：进入该函数进行执行；

③Step Into My Code（Alt+Shift+F7）：进入自己写的代码执行；

④Step Out（Shift + F8）：退出当前这个函数。

这里点击下一步之后，会跳到函数进行执行

初始化函数

![image.png](https://s2.loli.net/2022/06/30/jQkVopiEzOW1fBD.png) 

进入聚类算法

![image.png](https://s2.loli.net/2022/06/30/MhBqTk6ntOilVrz.png) 

在下面的图表中我们可以观测到当前变量的情况

例如这里先选取的2个初值向量是：

![image.png](https://s2.loli.net/2022/06/30/SM68IyT2n9gRXfo.png) 

这里在图像上画出初值向量：

<img src="https://s2.loli.net/2022/06/30/LhKYkZ7ECwscA9P.png" alt="image.png" style="zoom:67%;" /> 

这里对向量进行遍历计算他们与初值向量的距离，之后加入到对应的簇中：

<img src="https://s2.loli.net/2022/06/30/X3lgAIm7eJw5Lso.png" alt="image.png" style="zoom:80%;" /> 

综上，是pycharm的基础使用，还有更多的使用细节会在陆续的使用中再多加补充。