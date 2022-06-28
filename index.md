---
author: 残月溪冰
layout: default
title: GXL-Groups
permalink: /index
nav_exclude: true
search_exclude: false
---
### 页面概述

使用*GitHub Pages*搭建的简易静态博客,用于记录研究生学习过程中遇到的问题和可行的解决方法,包括常见环境工具的安装使用,文献论文阅读记录,专业基础和读书笔记等等.

使用`jekyll`作为渲染引擎,选择适合于文档页面组织展示的[Just the Docs](https://just-the-docs.github.io/just-the-docs/)主题,可以输出较为规整简洁的web页面.

大部分文档编写可以使用markdown标记语言来书写,可以根据[Just the Docs](https://just-the-docs.github.io/just-the-docs/)上面定义的一些扩展Liquid模板标记来个性化文档书写,可以使用html书写更为灵活的文档.

### 页面编写

1. 除了404,主页等页面,其它页面应当按照主题进行分类放置.

```txt
+-- ..
|-- (Jekyll files)
|
|-- envs_tools
|   |-- index.md (parent page)
|   |-- Github_Pages
|   |   |-- index.md (parent page)
|   |   |-- GithubPages安装.md
|   |   |-- GithubPages配置Just the Docs主题.md
|   |   |-- Just the Docs主题下markdown基本组件的使用.md
|   |   +-- just the docs 主题导航结构.md
|   |-- Python
|   |-- Git
|   |-- (other md files, pages with no children)
|   +-- ..
|-- Machine_Learning
|
|-- 404.html
|-- index.md
|-- (Jekyll files)
+-- ..
```

比如在主目录下有一个`envs_tools`目录,用来放置一些常用软件工具环境相关的页面,在下一级目录下,安装软件工具的类别,分成`GithubPages`,`Python`, `Git`等等.在`GithubPages`放置了安装配置和使用`GithubPages`相关的一些页面.主目录下的`Machine_Learning`目录用于放置记学习ML的一些页面记录,根目录下的`404.html`,`index.md`等等则是整个`GithubPages`站点相关的一些页面.

2. 导航栏页面顺序的显示

通过在页面的YAML参数指定`nav_order:`参数可以控制当前页面在导航栏显示的次序,如果不指定则按页面的`title`属性的值按照字典序进行排序,指定的参数在前,其后是字典序,字典序区分大小写,大写在前.

3. 导航栏层级结构

导航栏最多支持三级结构,在每个分类文件夹下有一个`index.md`文档,用来组织当前文件夹下所有页面的层级逻辑结构.显示当前文件夹下几个子文件夹下页面组织的`index.md`导航结构的组织.而子文件夹下的`index.md`则记录了当前该小主题下所有页面的集合.


### TODO

- [ ] 文件下载功能
- [ ] 评论反馈功能
- [ ] Github pages 协同编写更新
- [ ] ......
