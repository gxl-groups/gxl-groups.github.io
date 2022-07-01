---
title: CUDA+PyTorch安装
layout: default
nav_exclude: false
search_exclude: false
nav_order: 1
has_children: false
parent: pytorch
grand_parent: Python
---


<details open markdown="block">
  <summary>
    Table of contents
  </summary>
  {: .text-delta }
1. TOC
{:toc}
</details>


# CUDA+cuDNN安装
下载的CUDA版本必须要与所支持的驱动相对应<br>

可以先将显卡更新至最新版本后再下载。下载安装NVIDIA显卡驱动<br>
NVIDIA官网：[https://www.nvidia.cn/geforce/drivers/](https://www.nvidia.cn/geforce/drivers/)<br>
下载驱动程序，注册账号。<br>
![NAVIDIA.png](https://s2.loli.net/2022/06/29/u4AXEbQCtmnjz9J.png)<br>
安装NVIDIA完成后，打开GEFORCE Experience,打开驱动程序，检查更新文件，若有，则下载更新文件<br>
![](![NVIDIA更新.png](https://s2.loli.net/2022/06/29/wCxBWSIRAHnsG9K.png)<br>
更新后可进入cmd,输入nvidia-smi查看CUDA Version以及 Driver Version<br>
![Version查看.png](https://s2.loli.net/2022/06/29/CdJo6KEZrStyQxH.png)<br>
完成之后根据上述两个参数来判断下载哪个版本的CUDA和cuDNN，下载时要注意一定要让cuDNN与CUDA的版本号完全一样<br>
CUDA下载网址：[https://developer.nvidia.com/cuda-downloads?target_os=Windows&target_arch=x86_64](https://developer.nvidia.com/cuda-downloads?target_os=Windows&target_arch=x86_64)<br>
cuDNN下载网址：[https://developer.nvidia.com/rdp/cudnn-archive](https://developer.nvidia.com/rdp/cudnn-archive)<br>
![cuda版本对应.png](https://s2.loli.net/2022/06/29/M6qa2iI1JtWTsrP.png)<br>
解压cuDNN,解压下载CUDA文件夹,选择自定义安装，下一步，勾选全部选项<br>
![cuda1.png](https://s2.loli.net/2022/06/29/s2GeRClJpdyvWcZ.png)<br>
![cuda2.png](https://s2.loli.net/2022/06/29/PsNRva8M24Klebt.png)<br>
安装完成之后，找到根目录C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v11.7<br>
将cuDnn文件夹中的bin、include、lib文件夹中的内容复制到cuda中的同名文件夹中，结果如：<br>
![cuDNN复制.png](https://s2.loli.net/2022/06/29/kuZbrCz5GJ9LRms.png)<br>
以上操作完成CUDA+cuDnn安装，打开cmd，输入nvcc -V查看cuda信息：<br>
![cuda完成.png](https://s2.loli.net/2022/06/29/MuXhfLtN6YGlTRV.png)<br>
<br>


# PyTorch安装
完成显卡配置后，安装PyTorch<br>
打开Anaconda prompt，输入python -V查看python安装版本<br>
![python版本.png](https://s2.loli.net/2022/06/29/W9bYsCpimwTFzBe.png)<br>
输入conda create -n pytorch python=3.9<br>
![创建环境.png](https://s2.loli.net/2022/06/29/HUmg3qBwCc4zXM8.png)<br>
其中pytorch是创建环境变量名，python=3.9是当前环境的版本数<br>
创建环境后，需加载某些包，同意输入y<br>
![package load.png](https://s2.loli.net/2022/06/29/qVYiZcorFlG43ft.png)<br>
等待包下载完成后，输入activate pytorch，若左侧从base->pytorch,则成功进入pytorch环境<br>
![pytorch完成.png](https://s2.loli.net/2022/06/29/AdqDNMCEenThjfz.png)<br>
然后输入conda install pytorch<br>
等待安装完成后验证安装是否有效：<br>
- 首先输入conda activate pytorch进入pytorch虚拟环境<br>
- 输入python,进入python界面<br>
- 输入 import torch<br>
- 输入 torch.cuda.is_available()<br>
若输出结果为Ture，则安装成功，若为False，则失败<br>
![验证torch.png](https://s2.loli.net/2022/06/29/WOEveqpxCcDHUB7.png)<br>
若输出为False
输入pip list,查看当前环境下有哪些包，若没有torch，则进入其官网进行下载<br>
pytorch官网：[https://pytorch.org/](https://pytorch.org/)<br>
![torch.png](https://s2.loli.net/2022/06/29/4VRhYPTJCtoM81G.png)<br>
进入官网下拉，找到对应torch版本<br>
![torch load.png](https://s2.loli.net/2022/06/29/lFyeUt9EBnaDSMA.png)<br>
输入conda install pytorch torchvision torchaudio cudatoolkit=11.6 -c pytorch -c conda-forge<br>
![torch load2.png](https://s2.loli.net/2022/06/29/9lUrPzvZkufVMS7.png)<br>
下载完成后，再一次输入pip list 查看是否存在torch包<br>
若存在，再一次检测安装是否成功（输出为Ture）<br>
<br><br>
若还是错误，尝试直接下载 .whl文件进行<br>
下载地址：[https://download.pytorch.org/whl/torch/](https://download.pytorch.org/whl/torch/)<br>
选择匹配自己python版本的torch、torchaudio和torchvision，cu115代表匹配cuda11.5版本，cp39表示匹配python3.9版本，win就表示windows <br>
torch下载：[https://download.pytorch.org/whl/torch/](https://download.pytorch.org/whl/torch/)<br>
torchaudio下载：[https://download.pytorch.org/whl/torchaudio/](https://download.pytorch.org/whl/torchaudio/)<br>
torchvision下载：[https://download.pytorch.org/whl/torchvision/](https://download.pytorch.org/whl/torchvision/)<br>
![](whl文件.png)<br>
三个文件下载后，放在平时安装的位置：C:\Users\lenovo，其后在cmd中将三个文件按顺序安装<br>
cmd输入：pip install 文件名<br>
安装成功后，文件夹中出现一下六个文件<br>
![](https://img-blog.csdnimg.cn/d7727dd49dd043c1813f4688a56b20af.png#pic_center)<br>
再重新进入python环境，检查是否成功安装<br>
![验证torch.png](https://s2.loli.net/2022/06/29/WOEveqpxCcDHUB7.png)<br>
<br>
<br>