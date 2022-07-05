---
layout: default
title: GAMES101-lec04
layout: default
nav_exclude: true
search_exclude: false
nav_order: 6
has_children: false
grand_parent: Computer-Graphics
parent: GAMES101
---
<details open markdown="block">
  <summary>
目录
  </summary>
  {: .text-delta }
1. TOC
{:toc}
</details>

旋转-θ角度的矩阵 对照旋转θ角度的矩阵是转置 从定义上来看,是逆
![](https://s2.loli.net/2022/07/04/hbyRJpVcgTjC1SG.png)

旋转的逆等于旋转的转置(正交矩阵)

Viewing观测变换

三维变换

三维旋转 循环对称 向量叉乘

![](https://s2.loli.net/2022/07/04/QgrKUfAemXZoRaH.png)

一般性的旋转
![](https://s2.loli.net/2022/07/04/WkUvjPygIYDB4zn.png)

旋转公式
![](https://s2.loli.net/2022/07/04/MFGZ1sVJAE7jXpu.png)

给一个选择矩阵,旋转轴和选择角度

模型 视图 投影
视图变换 ~ 摆照相机(位置, 往那儿看look at direction, 向上方向up direction)

如何进行视图变换

相机固定不动,永远放在原点,往-z方向看,向上方向是y轴

![](https://s2.loli.net/2022/07/04/sicrnGPKD3IdHbY.png)

如何将相机放到标准位置上呢?
![](https://s2.loli.net/2022/07/04/sE8aXj1vwlCM5Ze.png)

1. 先把e平移到0
2. 把观察的方向g旋转到-z,向上的方向t移动到y方向

原变换不好写,通过逆变换来写
旋转矩阵是正交矩阵,逆是转置

投影:

1. 正交投影
2. 透视投影(会带来一种近大远小的现象)

![](https://s2.loli.net/2022/07/04/yixh91SPcLKtE7n.png)

对于正交投影,假设相近放在无限远处

![](https://s2.loli.net/2022/07/04/ZldVgX13oSWmjF2.png)

把对应的z给丢掉

![](https://s2.loli.net/2022/07/04/h6QAGiCrb9LBsYM.png)

但是这样如何区分物体的前和后呢?

![](https://s2.loli.net/2022/07/04/DY56cFpG4Wov73L.png)

任意给一个长方体将其映射为中心为原点的立方体

上述变换的矩阵表示:
先做平移移动到原点上,然后再做缩放

![](https://s2.loli.net/2022/07/04/DY56cFpG4Wov73L.png)

![](https://s2.loli.net/2022/07/04/L1HZYW27TPjgeD4.png)

![](https://s2.loli.net/2022/07/04/EFKYpOIokZPciWt.png)

平行线不相交

在透视投影下,两个
![](https://s2.loli.net/2022/07/04/dxIrAqNEV5HmoZR.png)

透视投影非常困难
近平面永远不变

![](https://s2.loli.net/2022/07/04/LeuIA28JsrGQWz5.png)

![](https://s2.loli.net/2022/07/04/qySutN3RrajV8wz.png)

![](https://s2.loli.net/2022/07/04/Jksrf1mRwQdlLBg.png)

在近的平面和远的平面上z不会发生任何变化.

![](https://s2.loli.net/2022/07/04/Jksrf1mRwQdlLBg.png)

![](https://s2.loli.net/2022/07/04/TohxrOwSBgvCDE4.png)

中间的点在经过挤压后z该如何变化?

如何定义这样一个丝锥?
长宽比 视角

![](https://s2.loli.net/2022/07/05/CBx8UF5HapJwY96.png)

什么是屏幕?

什么是屏幕的空间?

![](https://s2.loli.net/2022/07/05/gmylz4YKOHs1BkN.png)

![](https://s2.loli.net/2022/07/05/RgG93Klsat15ymH.png)


保留z方向不变


采样的方法
把一个函数给离散化
利用像素中心对屏幕空间进行采样


真实的像素的构成:
dayer pattern
