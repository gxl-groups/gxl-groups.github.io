---
title: markdown组件
author: 残月溪冰
layout: default
nav_exclude: false
search_exclude: false
nav_order: 2
has_children: false
parent: GithubPages
grand_parent: 常用环境工具软件
---

1. TOC
{: toc}

## Just The Docs主题下markdown基本组件的使用

### Markdown 基本排版元素的使用

### button

1.   普通带有跳转链接的button

     ```md
     [Link button](http://example.com/){: .btn }
     ```

[Link button](http://example.com/){: .btn }

2.   自定义颜色的button

     ```md
     [Link button](http://example.com/){: .btn .btn-purple }
     [Link button](http://example.com/){: .btn .btn-blue }
     [Link button](http://example.com/){: .btn .btn-green }
     ```

[Link button](http://example.com/){: .btn .btn-purple }
[Link button](http://example.com/){: .btn .btn-blue }
[Link button](http://example.com/){: .btn .btn-green }

3.   带有边缘框的button

     ```md
     [Link button](http://example.com/){: .btn .btn-outline }
     ```

     [Link button](http://example.com/){: .btn .btn-outline }

`GitHub Flavored Markdown`不支持`button`,不得不通过`HTML`的方式来使用:

```html
<button type="button" name="button" class="btn">Button element</button>
```

<button type="button" name="button" class="btn">Button element</button>

效果和上面的一样



通过一些工具来更加灵活的使用button

1.   改变大小

     用其它的组件来包裹button,通过设置包裹组件容器的属性来设置

     ```html
     <span class="fs-8">
     [Link button](http://example.com/){: .btn }
     </span>
     
     <span class="fs-3">
     [Tiny ass button](http://example.com/){: .btn }
     </span>
     ```

     <span class="fs-8">
     [Link button](http://example.com/){: .btn }
     </span>

     <span class="fs-3">
     [Tiny ass button](http://example.com/){: .btn }
     </span>

2.   在按钮中添加空白

     ```html
     [Button with space](http://example.com/){: .btn .btn-purple .mr-2 }
     [Button ](http://example.com/){: .btn .btn-blue }
     
     [Button with more space](http://example.com/){: .btn .btn-green .mr-4 }
     [Button ](http://example.com/){: .btn .btn-blue }
     ```

     [Button with space](http://example.com/){: .btn .btn-purple .mr-2 }
     [Button ](http://example.com/){: .btn .btn-blue }

     [Button with more space](http://example.com/){: .btn .btn-green .mr-4 }
     [Button ](http://example.com/){: .btn .btn-blue }



### 文本标签

通过label来给文本中一些内容添加额外的标记,可以使用少量的颜色,默认的颜色是蓝色.

```md
Default label
{: .label }

Blue label
{: .label .label-blue }

Stable
{: .label .label-green }

New release
{: .label .label-purple }

Coming soon
{: .label .label-yellow }

Deprecated
{: .label .label-red }
```

Default label
{: .label }

Blue label
{: .label .label-blue }

Stable
{: .label .label-green }

New release
{: .label .label-purple }

Coming soon
{: .label .label-yellow }

Deprecated
{: .label .label-red }



### 表格

markdown格式的表格

```md
| head1        | head two          | three |
|:-------------|:------------------|:------|
| ok           | good swedish fish | nice  |
| out of stock | good and plenty   | nice  |
| ok           | good `oreos`      | hmm   |
| ok           | good `zoute` drop | yumm  |
```

| head1        | head two          | three |
| :----------- | :---------------- | :---- |
| ok           | good swedish fish | nice  |
| out of stock | good and plenty   | nice  |
| ok           | good `oreos`      | hmm   |
| ok           | good `zoute` drop | yumm  |



### 列表

1.   无序列表

     ```md
     - Item 1
     - Item 2
     - Item 3
     
     _or_
     
     * Item 1
     * Item 2
     * Item 3
     ```

     

- Item 1
- Item 2
- Item 3

_or_

* Item 1
* Item 2
* Item 3

2.   有序列表

     ```md
     1. Item 1
     1. Item 2
     1. Item 3
     ```

     1. Item 1
     1. Item 2
     1. Item 3

3.   任务列表

```md
- [ ] hello, this is a todo item
- [ ] hello, this is another todo item
- [x] goodbye, this item is done
```

- [ ] hello, this is a todo item
- [ ] hello, this is another todo item
- [x] goodbye, this item is done

4.   使用html语法来定义列表

     ```html
     <dl>
       <dt>Name</dt>
       <dd>Godzilla</dd>
       <dt>Born</dt>
       <dd>1952</dd>
       <dt>Birthplace</dt>
       <dd>Japan</dd>
       <dt>Color</dt>
       <dd>Green</dd>
     </dl>
     ```

<dl>
  <dt>Name</dt>
  <dd>Godzilla</dd>
  <dt>Born</dt>
  <dd>1952</dd>
  <dt>Birthplace</dt>
  <dd>Japan</dd>
  <dt>Color</dt>
  <dd>Green</dd>
</dl>



### 代码

1.   行内代码

```md
Lorem ipsum dolor sit amet, `<inline code snippet>` adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

## Heading with `<inline code snippet>` in it.
```

Lorem ipsum dolor sit amet, `<inline code snippet>` adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.

## Heading with `<inline code snippet>` in it.

2.   多行代码(语法高亮)

````md
```js
// Javascript code with syntax highlighting.
var fun = function lang(l) {
  dateformat.i18n = require('./lang/' + l)
  return true;
}
```
````

```js
// Javascript code with syntax highlighting.
var fun = function lang(l) {
  dateformat.i18n = require('./lang/' + l)
  return true;
}
```

3.   jekyll渲染代码

     1.   带有按钮跳转的

          ```md
          [Link button](http://example.com/){: .btn }
          ```

          [Link button](http://example.com/){: .btn }

     2.   与div搭配使用

          ````html
          <div class="code-example" markdown="1">
          
          [Link button](http://example.com/){: .btn }
          
          </div>
          ```markdown
          [Link button](http://example.com/){: .btn }
          ```
          ````

4.   代码使用行号

     HTML压缩的默认设置与jekyll针对高亮代码中行号生成的html不兼容.

     为了避免不符合标准的html和不满意的布局,可以使用一下配置选项关闭html压缩

     ```yaml
     compress_html:
       ignore:
         envs: all
     ```

     在使用kramdown代码块时,可以通过下面的配置选项全局打开:

     ```yaml
     kramdown:
       syntax_highlighter_opts:
         block:
           line_numbers: true
     ```

     可以通过Liquid标签来在本地抑制显示高亮代码块的行号(没有linenos标签)

     ```md
     {% highlight some_language %}
     Some code
     {% endhighlight %}
     ```

5.   压缩html与代码块行号突出显示一起使用

     所有的高亮代码块要通过下面的方式进行包装:

     三个反引号的方法:

     ````md
     {% capture some_var %}
     ```some_language
     Some code
     ```
     {% endcapture %}
     {% assign some_var = some_var | markdownify %}
     {% include fix_linenos.html code=some_var %}
     ````

     使用Liquid模板高亮:

     ```md
     {% capture some_var %}
     {% highlight some_language linenos %}
     Some code
     {% endhighlight %}
     {% endcapture %}
     {% include fix_linenos.html code=some_var %}
     ```



### Just the Docs 定义的其它辅助布局的标记



