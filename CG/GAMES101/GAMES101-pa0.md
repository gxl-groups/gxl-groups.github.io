---
layout: default
title: GAMES101-pa0
layout: default
nav_exclude: false
search_exclude: false
nav_order: 4
has_children: false
grand_parent: Computer-Graphics
parent: GAMES101
---

# GAMES101 PA0

作业pa0文档的一份复制:[pa0](https://gxl-groups.github.io/CG/GAMES101/PA/pa0/pa0.pdf)

GAMES101 pa0的主要目的是配置和熟悉开发环境.

课程官方提供了一个已经配置好的Ubuntu虚拟机,按照文档的指示,可以在virtual box中按照开发所用的虚拟机环境.

我直接使用WSL2和VSCode,作业pa0的环境没有遇到问题,关于作业pa0需要用到的eigen的安装与配置,可以看一下此前的一个记录:[Linux下eigen的安装与配置](https://gxl-groups.github.io/CG/linux%E4%B8%8Beigen%E7%9A%84%E5%AE%89%E8%A3%85%E4%B8%8E%E9%85%8D%E7%BD%AE.html)

作业pa0中给出了一个样例程序`main.cpp`,在这个样例程序中,简单的介绍了eigen库的vector和matrix的基本运算,更多关于向量和矩阵运算的信息,可以通过阅读[eigen官方手册向量和矩阵部分](https://eigen.tuxfamily.org/dox/group__TutorialMatrixArithmetic.html)获得更多更全面的认识.

## pa0的描述与提交

### 作业描述

>给定一个点 P=(2,1), 将该点绕原点先逆时针旋转45◦，再平移(1,2), 计算出变换后点的坐标(要求用齐次坐标进行计算)

### 作业解答

像素点的变换可以用矩阵来描述,使用齐次坐标来描述,分别写出绕原点逆时针旋转和平移的变换矩阵,根据变换的先后顺序,可以将两次变换通过矩阵乘法合为一个变换,然后用变换矩阵右乘像素点向量就可以得到变换后的像素点的向量.

对应的源程序如下:

```cpp
#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>
using namespace std;
using namespace Eigen;
double const kdPi = acos(-1);

int main(int argc, char** argv){
    Vector3d p {2, 1, 1};
    cout << "p is (" << p.transpose() << ")" << endl;
    double theta = kdPi / 4;
    MatrixXd rotation { {cos(theta), -sin(theta), 0},
                    {sin(theta), cos(theta), 0},
                    {0, 0, 1}};
    MatrixXd translation { {1, 0, 1}, {0, 1, 2}, {0, 0, 1}};
    MatrixXd transformation = translation * rotation;
    Vector3d result = transformation * p;
    cout << "After transformation: " << result.transpose() << endl;
    return 0;
}
```

### 编译

作业要求使用cmake进行编译,关于cmake的基本用法可以查阅cmake的[官方文档](https://cmake.org/cmake/help/latest/index.html)

作业pa0提供了一份`Cmakelists.txt`,可以根据这个文件使用cmake编译程序

```cmake
# 指定Cmake最低编译版本
cmake_minimum_required (VERSION 2.8.11)
# 指定工程名
project (Transformation)
# 查找头文件
find_package(Eigen3 REQUIRED)
# 指定头文件目录位置
include_directories(EIGEN3_INCLUDE_DIR)
# 生成可执行文件Transformation main.cpp是源文件
add_executable (Transformation main.cpp)
```

1. 创建`build`文件夹`mkdir build`;
2. 进入`build`文件夹`cd build`;
3. `cmake ..`
4. 编译程序 `make`
5. 执行程序

### 提交

