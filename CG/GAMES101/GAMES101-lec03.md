---
layout: default
title: GAMES101-lec03
layout: default
nav_exclude: true
search_exclude: false
nav_order: 5
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

# 变换Transformation

## 二维变换

变换与矩阵的联系

### 缩放 Scale

缩放矩阵

非均匀缩放矩阵


### 反射 Reflection

相对于y轴做一个翻转,x变成-x,y不变

### 切变 Shear

竖直方向不变,水平方向移动(考虑特殊位置,两个平行于水平面的点)

找前后对应关系

### 旋转Rotate

二维平面内,绕着(0,0)原点进行旋转,默认是逆时针方向.

线性变换和矩阵是等价的


## 齐次坐标

### 平移变换

很容易写出表达式,但是很难写成矩阵变换乘积的结果,需要添加一个额外项

这样看来平移并不是一个线性变换,但是不想讲将平移作为一个特殊的变换,是否有一种统一的方法来表示所有的变换?

tradeoff
引入某种方便的表述,必然要引起另一方面代价的产生

no free lunch

数据结构空间换时间复杂度

额外添加一个维度

向量,具有平移不变性
向量额外维度是0保证上述平移不变性

向量和向量的加法

一个点和另一个点相加得到它们的中点.

统一线性变换和平移变换的表示,额外的开销是多一个维度

## 逆变换 Inverse Transform

数学上等于乘以变换矩阵的逆

## 变换合成

1. 复杂变换可以通过一些列简单变换组合得到

2. 变换的顺序非常重要,不满足交换律
最先执行的写在最右面

一个矩阵就可以表示非常复杂的变换

## 变换分解

## 三维变换

三维空间的齐次坐标

齐次坐标,先线性变换再平移