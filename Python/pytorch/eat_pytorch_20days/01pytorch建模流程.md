---
nav_exclude: true
---
## Pytorch建模流程概述

使用pytorch实现神经网络模型的一般流程:

1. 准备数据
2. 定义模型
3. 训练模型
4. 评估模型
5. 使用模型
6. 保存模型

在刚接触时,比较困难的是准备数据的部分,如何将原始的数据处理为模型可以接收处理的数据格式.

后面将分别以实际生活中可能遇到的结构化数据,图片数据,文本数据和时间数据为例,简要介绍面对不同的数据类型,使用pytorch进行建模处理的方法.

## 结构化数据建模
