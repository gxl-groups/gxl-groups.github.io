---
nav_exclude: true
---

![](https://s2.loli.net/2022/07/03/g91XIMkGlsScVZo.png)

人外有人,山外有山,永葆谦虚,不断学习.

mvc
设计模式

![](https://s2.loli.net/2022/07/03/2XkfET8mxdpWeAD.png)

课程目标
![](https://s2.loli.net/2022/07/03/Li3Uhwk6EIqZm1f.png)

上电自检 外设使用统一的协议

BIOS读引导区程序(每个硬盘前面有一块)

OS引导, shell,文件系统...

![](https://s2.loli.net/2022/07/03/2fcbmVtXew5ZvSC.png)


## 数字图像简介

颜色空间 Color Spaces:


1959年阴极射线显像管CRT显示器

光栅显示器

数学模型 栅格图 点阵图

像素构成的矩阵:连续空间离散采样

像素 的方阵列 每个元素称为像素,存一种颜色

图像分类: 二值图像, 灰度图像, 彩色图像(32bits,r,g,b,α透明)

图像文件的格式:

BMp: bitmap raw data ,无压缩 文件大

GIF
文件小, 更存储动画

JPPEG 压缩率高


视频: 图像序列 1s25fps

图像的连续数学模型

图像的离散数学模型

图像编程
面向对象编程


图像变形 特定效果的变形

用户交互

图像处理从需求到模型:
![](https://s2.loli.net/2022/07/03/adJR7qseGwkAEMu.png)


抠图 将物体从图像中分割出来
智能做法 用户随意指定物体的大致内容

图像移植 能否做到无缝移植?

图像只是表象,背后的抽象,数学问题是什么?

图像的数学模型

- 连续

- 离散

从数学的角度来看图像处理

1. 图像是线性空间的数据点集

例子1.: 图像颜色迁移

![](https://s2.loli.net/2022/07/03/iuDCBj2rAWsZ6LN.png)

例子2. 彩图灰度化(降维3D->1D PCA)

例子3: 黑白照片着色(1D->3D)

例子4: 颜色和弦(从艺术家风格 统计信息)



2. 图像是一个矩阵

图像分解
SVD非常重要一定要学
![](https://s2.loli.net/2022/07/03/A1NokT6MamgX8ER.png)

谱分解

