---
title: 导航结构
author: 残月溪冰
layout: default
nav_exclude: false
search_exclude: false
nav_order: 3
has_children: false
parent: GithubPages
grand_parent: 常用环境工具软件
---

1. TOC
{:toc}

## just the docs主题导航结构

默认情况下,所有的页面多将在主导航中显示为顶级页面,除非定义了父页面

### 指定顺序的页面

如果要指定页面顺序,可以在页面的YAML前端中使用`nav_order`参数

```md
---
layout: default
title: Customization
nav_order: 4
---
```

参数值确定顶级页面的顺序,以及具有相同父级的子页面的顺序.可以为不同父级的子页面重用相同的参数值(从1开始的整数).

参数值可以是数值(整数,浮点)或字符串.当省略`nav_order`参数时,默认为按字幕顺序排列的页面标题.具有数字`nav_order`参数的页面时钟位于具有字符串或默认参数的页面之前.如果要使页面顺序独立于页面标题,可以在所有页面上显示设置`nav_order`参数

默认情况下, 所有大写字母都在所有小写字母之前;可以在配置文件中添加:`nav_sort:case_insensitive`来忽略大小写.用引号将字符串串起来是可选的.



### 排除页面

对于不希望在主导航中的特定页面,比如404页面,可以通过`nav_exclude: true`参数,设置为不显示

```md
---
layout: default
title: 404
nav_exclude: true
---
```

这个参数不会影响自动产生子页面列表,可以用它来访问从住导航中排除的页面.

没有`title`的页面会自动从主导航中排除.



### 子页面

有时需要创建一个包含许多子项的页面.

首先,将相关的页面保存到一个共同的目录中.比如在这些文档中,我们将所有书面文档保存在`./docs`目录中,并将每部分保存在如`./docs/ui-components`等目录中,如下所示:

```txt
+-- ..
|-- (Jekyll files)
|
|-- docs
|   |-- ui-components
|   |   |-- index.md  (parent page)
|   |   |-- buttons.md
|   |   |-- code.md
|   |   |-- labels.md
|   |   |-- tables.md
|   |   +-- typography.md
|   |
|   |-- utilities
|   |   |-- index.md      (parent page)
|   |   |-- color.md
|   |   |-- layout.md
|   |   |-- responsive-modifiers.md
|   |   +-- typography.md
|   |
|   |-- (other md files, pages with no children)
|   +-- ..
|
|-- (Jekyll files)
+-- ..
```

在父页面添加这样的参数`has_children: true`:

```md
---
layout: default
title: UI Components
nav_order: 2
has_children: true
---
```

告知这是一个父页面

在子页面上,只要将`parent`设置为父页面的标题,并设置导航的顺序,此在当前父页面的部分范围内

```md
---
layout: default
title: Buttons
parent: UI Components
nav_order: 2
---
```

### 自动子页面生成目录

默认情况下,所有带子页面的页面都会自动添加一个目录,该目录在父页面的内容之后列出子页面.如果想禁用自动目录,可以在父页面设置`has_toc: false`

```md
---
layout: default
title: UI Components
nav_order: 2
has_children: true
has_toc: false
---
```

### 子页面的子页面

可以在子页面的子页面上使用类似于子页面和父页面的模式来实现:

1.   在子页面添加`has_children`属性;
2.   在给孙子页面添加`parent` and `grand_parent`属性

```md
---
layout: default
title: Buttons
parent: UI Components
nav_order: 2
has_children: true
---
```

```md
---
layout: default
title: Buttons Child Page
parent: Buttons
grand_parent: UI Components
nav_order: 1
---
```

将会产生一个下面的导航结构:

```md
+-- ..
|
|-- UI Components
|   |-- ..
|   |
|   |-- Buttons
|   |   |-- Button Child Page
|   |
|   |-- ..
|
+-- ..

```

### 

### 带有目录的页面内导航

如果想在文档上生成 目录,可以使用kramdown中的`{:toc}`方法,紧跟在markdown的`<ol>`之后,将根据标题和标题级别自动生成指向页面各部分的锚链接.

如果正在使用某个标题并且不希望它出现在toc中,可以跳过指定的标题

```md
# Navigation Structure

{: .no_toc }

## Table of contents

{: .no_toc .text-delta }

1. TOC
   {:toc}
```

这个示例将跳过toc中页面名称标题`#`以及目录本身的标题`##`,还有目录 本身,如果想获得无序列表,请将上面的`1. toc`替换为`- toc`



### 可折叠的目录表

可以使用`<details>`和`<summary>`元素来使目录可折叠,如下面的例子所示.属性`open`默认扩展目录, 带有`{: .text-delta}`是可选的:

```md
<details open markdown="block">
  <summary>
    Table of contents
  </summary>
  {: .text-delta }
1. TOC
{:toc}
</details>
```

