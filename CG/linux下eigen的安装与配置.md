---
layout: default
title: linux下eigen的安装与配置
nav_exclude: true
search_exclude: false
nav_order: 2
has_children: false
parent: Computer-Graphics
---

# linux下eigen的安装与配置



## 1. 从gitlab上下载源代码

```bash
git clone https://gitlab.com/libeigen/eigen.git
```

得到一个名为`eigen`的文件夹

## 2. 进入`eigen`文件夹,查看安装`INSTALL`指示

```bash
cd eigen
vim INSTALL
```

```bash
Installation instructions for Eigen
***********************************

Explanation before starting
***************************

Eigen consists only of header files, hence there is nothing to compile
before you can use it. Moreover, these header files do not depend on your
platform, they are the same for everybody.

Method 1. Installing without using CMake
****************************************

You can use right away the headers in the Eigen/ subdirectory. In order
to install, just copy this Eigen/ subdirectory to your favorite location.
If you also want the unsupported features, copy the unsupported/
subdirectory too.

Method 2. Installing using CMake
********************************

Let's call this directory 'source_dir' (where this INSTALL file is).
Before starting, create another directory which we will call 'build_dir'.

Do:

  cd build_dir
  cmake source_dir
  make install

The "make install" step may require administrator privileges.

You can adjust the installation destination (the "prefix")
by passing the -DCMAKE_INSTALL_PREFIX=myprefix option to cmake, as is
explained in the message that cmake prints at the end.
```



## 3. 创建`Build`文件夹,然后编译安装

```bash
mkdir build
cd build
cmake ..
sudo make install

```

可以看到在`/usr/local/include`目录下有一个`eigen3`文件夹

![image-20220702120338483](https://s2.loli.net/2022/07/02/pAd9ObeHfCsWZva.png)



## 4. 注意

eigen仅仅包含了一些头文件,在使用的之前不需要编译,具有很好的跨平台特性.

如果只是安装eigen,可以直接把目录下的`Eigen`复制到`/usr/local/include`下.

从上面的安装结果可以看到,上面安装到`/usr/local/include`下的是`eigen3`这个目录

将这个目录下的`Eigen`复制到上一级目录

```bash
sudo cp eigen3/Eigen . -r
```

## 5. 测试

```cpp
// A sample first program sample.cpp
#include <iostream>
#include <Eigen/Dense>
 
using Eigen::MatrixXd;
 
int main()
{
  MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  std::cout << m << std::endl;
}
```

编译`clang++ sample.cpp -o sample`

执行`./sample`

```bash
  3  -1
2.5 1.5
```



矩阵和向量测试:

```cpp
// Size set at run time: run_time.cpp

#include <iostream>
#include <Eigen/Dense>
 
using Eigen::MatrixXd;
using Eigen::VectorXd;
 
int main()
{
  MatrixXd m = MatrixXd::Random(3,3);
  m = (m + MatrixXd::Constant(3,3,1.2)) * 50;
  std::cout << "m =" << std::endl << m << std::endl;
  VectorXd v(3);
  v << 1, 2, 3;
  std::cout << "m * v =" << std::endl << m * v << std::endl;
}
```

结果:

```bash
m =
94.0188  89.844 43.5223
49.4383 101.165  86.823
88.3099 29.7551 37.7775
m * v =
404.274
512.237
261.153
```



```cpp
// Size set at compile time: compile_time.cpp
#include <iostream>
#include <Eigen/Dense>
 
using Eigen::Matrix3d;
using Eigen::Vector3d;
 
int main()
{
  Matrix3d m = Matrix3d::Random();
  m = (m + Matrix3d::Constant(1.2)) * 50;
  std::cout << "m =" << std::endl << m << std::endl;
  Vector3d v(1,2,3);
  
  std::cout << "m * v =" << std::endl << m * v << std::endl;
}
```

结果:

```bash
m =
94.0188  89.844 43.5223
49.4383 101.165  86.823
88.3099 29.7551 37.7775
m * v =
404.274
512.237
261.153
```

