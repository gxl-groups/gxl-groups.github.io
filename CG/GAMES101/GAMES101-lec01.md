---
layout: default
title: GAMES101-lec01
layout: default
nav_exclude: false
search_exclude: false
nav_order: 2
has_children: false
grand_parent: Computer-Graphics
parent: GAMES101
---

# GAMES101- 现代计算机图形学入门lec01

主要介绍图像学的应用和四个主要方面(光栅化, 曲线网格,光线追踪,动画模拟)

## 什么是图形学 ?

>   The use of computers to synthesize and manipulate visual information

## 为什么要学图形学?

1.  应用

    -   Video Games  游戏画面 好? 技术上:标准 ----  画面是否足够亮? 全局光照 图像渲染 

    -   Movies 

        -   特效 黑客帝国 通过计算机技术合成 (爆炸, 子弹...) 特效容易做,很少见到;日常见到的最难做.

        -   人面部捕捉 (阿凡达) 

    -   动画 (毛发显示.每一根头发和光线作用) 几何形体的表示渲染 计算光线传播方式

    -   设计 CAD CG制作

    -   可视化  三维空间信息-->视觉信息

    -   虚拟现实 VR vs. 增强现实(Augmented Reality) AR   VR看不到现实;AR可以看到现实

    -   数字化图像编辑 

    -   模拟(仿真) 沙尘暴模拟 物理模拟 黑洞模拟(光线 偏折)

    -   GUI 图形用户接口

    -   字体Typography 点阵 矢量

         "The Quick Brown Fox Jumps Over The Lazy Dog"出现了26个字母

2.   挑战

![image-20220701181131762](https://s2.loli.net/2022/07/02/d47vk89gKcofPYz.png)

​			![image-20220702195540546](https://s2.loli.net/2022/07/02/g2iR3JpMuCcONkA.png)

不用考虑上面的原因,只需记得

**Computer Graphics is AWESOME!**



## 课程主题

-   光栅化 OpenGL(一个API)
-   曲线网格
-   光线追踪 路径追踪 
-   动画与模拟

### 光栅化 Rasterization

三维几何形体显示在屏幕上

![image-20220701181523836](https://s2.loli.net/2022/07/01/NyQFvlIqC1cr94D.png)

实时 vs.离线

### 曲线网格

光滑曲线曲面

![image-20220701181602031](https://s2.loli.net/2022/07/01/CUqLOax5HSlmfbK.png)





### 光线追踪

![image-20220701181639421](https://s2.loli.net/2022/07/01/PNvqi81ZBlCFHog.png)

tradeoff 光线追踪 效果好但是慢



### 动画 模拟 Animation Simulation

![image-20220702195926614](https://s2.loli.net/2022/07/02/hQKbPAszGiVoX3L.png)



## 课程不包括?

1.   图形API库

 ![image-20220702200040551](https://s2.loli.net/2022/07/02/I6homArclXFw4VP.png)

2.   图形渲染引擎的使用

 ![image-20220702200133405](https://s2.loli.net/2022/07/02/KoLXyN3OIU2hE4e.png)

3.   计算机视觉 

 ![image-20220702200231036](https://s2.loli.net/2022/07/02/6mZPs2EbRoSv5AI.png)

图像学 vs. 计算机视觉

一切需要理解猜测的都是计算机视觉

![image-20220701182249698](https://s2.loli.net/2022/07/01/JRkIG4BcMb7auVy.png)

## 关于课程的其它事项

1. 全面深入但是不涉及硬件编程

2. 课程会根据实际情况调整
![image-20220702200422600](https://s2.loli.net/2022/07/02/A61U8gNB5ZolpE9.png)

3. 课程网站[https://sites.cs.ucsb.edu/~lingqi/teaching/games101.html](https://sites.cs.ucsb.edu/~lingqi/teaching/games101.html)课程的日程安排,演示稿,阅读材料等都可以从上面的课程网站获得

4. 课程推荐参考书籍

![image-20220702200709844](https://s2.loli.net/2022/07/02/bnC9wYj3cBgHWFI.png)

5. 课程作业内容讨论的BBS

6. ~~作业提交相关的问题~~

7. 建议使用IDE来完成作业

![image-20220701183944359](https://s2.loli.net/2022/07/01/aoCLJADxdsT3429.png)

8. 学术诚信问题

