---
title: Jekyll主题配置
author: 残月溪冰
layout: default
nav_exclude: false
search_exclude: false
nav_order: 1
has_children: false
parent: GithubPages
grand_parent: envs_tools
---

- toc
{:toc}

## 安装

### 使用远端Github主题

在站点的配置文件`_config.yml`下添加:

```yaml
remote_theme: just-the-docs/just-the-docs
```

### 本地安装

#### 1. 通过Reby Gem安装

两种方式:

1.   通过`Terminal`输入:

     ```ruby
     gem install just-the-docs
     ```

2.   在`Gemfile`文件中添加下面的内容:

     ```ruby
     gem "just-the-docs"
     ```

     然后执行`bundle install`

     注意: 可以通过执行命令:

     ```bash
     bundle config set --local path 'vendor/bundle'
     ```

     将安装的依赖项放到项目所在的文件夹下

     

#### 2. 在项目的`_config.yml`中设置使用**Just the Docs**主题

```yaml
theme: "just-the-docs"
```

#### 3. 初始化搜索数据,创建一个`search-data.json`的文件

```bash
bundle exec just-the-docs rake search:init
```

#### 4. 在本地运行`Jekyll server`

```bash
jekyll serve --livereload
```

`--livereload`参数选项可以让服务器在更改源文件后自动刷新页面

#### 5. 通过 [http://localhost:4000](http://localhost:4000/)可以预览



## 配置

通过`_config.yml`对站点的一些信息进行配置

### Site logo

在`assets`目录下创建一个`iamges`文件夹,然后放入设计的$18\times18$的icon图标

然后在配置文件下添加这样一行:

```yaml
# Set a path/url to a logo that will be displayed instead of the title
logo: "/assets/images/gxl.png"
```



### 配置站点搜索功能

```yaml
# Enable or disable the site search
# Supports true (default) or false
search_enabled: true

search:
  # Split pages into sections that can be searched individually
  # Supports 1 - 6, default: 2
  heading_level: 2
  # Maximum amount of previews per search result
  # Default: 3
  previews: 3
  # Maximum amount of words to display before a matched word in the preview
  # Default: 5
  preview_words_before: 5
  # Maximum amount of words to display after a matched word in the preview
  # Default: 10
  preview_words_after: 10
  # Set the search token separator
  # Default: /[\s\-/]+/
  # Example: enable support for hyphenated search words
  tokenizer_separator: /[\s/]+/
  # Display the relative url in search results
  # Supports true (default) or false
  rel_url: true
  # Enable or disable the search button that appears in the bottom right corner of every page
  # Supports true or false (default)
  button: false
```

### 添加指向Github主页的链接

```yaml
# Aux links for the upper right navigation
aux_links:
  "GXL-Groups":
    - "//github.com/gxl-groups/"

# Makes Aux links open in a new tab. Default is false
aux_links_new_tab: false
```

### 标题链接

```yaml
# Heading anchor links appear on hover over h1-h6 tags in page content
# allowing users to deep link to a particular heading on a page.
#
# Supports true (default) or false
heading_anchors: true
```

### 网页页脚内容配置

```yaml
# Footer content
# appears at the bottom of every page's main content
# Note: The footer_content option is deprecated and will be removed in a future major release. Please use `_includes/footer_custom.html` for more robust markup / liquid-based content.
footer_content: "2022-2025 ShuoYang."

# Footer last edited timestamp
last_edit_timestamp: true # show or hide edit time - page must have `last_modified_date` defined in the frontmatter
#last_edit_time_format: "%b %e %Y at %I:%M %p" # uses ruby's time format: https://ruby-doc.org/stdlib-2.7.0/libdoc/time/rdoc/Time.html
last_edit_time_format: "%Y年%m月%e日 - %H:%M

# Footer "Edit this page on GitHub" link text
gh_edit_link: true # show or hide edit this page link
gh_edit_link_text: "Edit this page on GitHub."
gh_edit_repository: "https://github.com/gxl-groups/gxl-groups.github.io" # the github URL for your repo
gh_edit_branch: "main" # the branch that your docs is served from
# gh_edit_source: docs # the source that your files originate from
gh_edit_view_mode: "tree" # "tree" or "edit" if you want the user to jump into the editor immediately
```

`foot_content`已经被弃用了,可以通过编辑`_includes/footer_custom.html`获得更加灵活的配置.只有当页面有一个`last_modified_date`标记时

### 站点主题

默认是亮色,可选黑色

```yaml
# Color scheme supports "light" (default) and "dark"
color_scheme: dark
```

### google分析

```yaml
# Google Analytics Tracking (optional)
# e.g, UA-1234567-89
ga_tracking: UA-5555555-55
ga_tracking_anonymize_ip: true # Use GDPR compliant Google Analytics settings (true by default)
```



### 文档组织

默认的导航和搜索包括普通页面,可以通过[jekyll collections](https://jekyllrb.com/docs/collections/)来按语义组织文档

比如,把所有的文档放在`doc`文件夹下,然后创建`doc` collection

```yaml
# Define Jekyll collections
collections:
  # Define a collection named "docs", its documents reside in the "_docs" directory
  docs:
    permalink: "/:collection/:path/"
    output: true
  envs_tools:
    permalink: "/:collection/:path/"
    output: true

GXL-Groups:
  # Define which collections are used in just-the-docs
  collections:
    # Reference the "docs" collection
    docs:
      # Give the collection a name
      name: Documentation
      # Exclude the collection from the navigation
      # Supports true or false (default)
      nav_exclude: false
      # Exclude the collection from the search
      # Supports true or false (default)
      search_exclude: false
    envs_tools:
      # Give the collection a name
      name: environments_tools
      # Exclude the collection from the navigation
      # Supports true or false (default)
      nav_exclude: false
      # Exclude the collection from the search
      # Supports true or false (default)
      search_exclude: false
    
```

比如上面的配置,在项目创建两个文件夹`docs`和`envs_tools`,然后创建两个对应的`collections`,这样可以根据文件的类别分类存.通过`nav_exclude `和`search_exclude`选项来配置,是否显示在导航栏和搜索栏中.
