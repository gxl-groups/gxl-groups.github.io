---
title: GithubPages安装
author: 残月溪冰
layout: default

nav_exclude: false
search_exclude: false
nav_order: 1
has_children: false
parent: GithubPages
grand_parent: envs_tools
---


<details open markdown="block">
  <summary>
    Table of contents
  </summary>
  {: .text-delta }
1. TOC
{:toc}
</details>
{: .no_toc .text-delta }


### [安装Ruby](https://www.ruby-lang.org/en/documentation/installation/)

`sudo apt-get install ruby-full`

### [安装bundler](https://bundler.io/)

`gem install bundler`

### 在github上创建站点仓库

### 创建站点

1. 初始化本地仓库

2. 创建用于发布站点的`docs`文件夹`mkdir docs && cd docs`

3. 创建Jekyll站点`jekyll new --skip-bundle .`

创建成功之后,文件夹下包含以下文件和文件夹

```bash
404.html  _config.yml  about.markdown
Gemfile   _posts       index.markdown
```

4. 打开Gemfile文件

5. 注释以`gem "jekyll"`开头的行,如下图所示:

    ![image-20220625105659075](https://s2.loli.net/2022/06/25/D9BdCeRfnHo1IAG.png)

6.   编辑以`# gem "github-pages"`开头的行如下图所示:

     ![image-20220625110015554](https://s2.loli.net/2022/06/25/3hKCzlZuXJjxUFr.png)

​		将其更改为`gem "github-pages", "~> GITHUB-PAGES-VERSION", group: :jekyll_plugins`,这里的`GITHUB-PAGES-VERSION`可以在这个找到[Dependency version](https://pages.github.com/versions/),目前最新的版本是226	![image-20220625110306624](https://s2.loli.net/2022/06/25/PfU4vdmXcnSeyVw.png)

7.   保存关闭Gemfile

8.   执行`bundle install`命令

     在安装的过程中可能会有下面的输出:

     ```bash
     Your user account isn't allowed to install to the system RubyGems.
       You can cancel this installation and run:
     
           bundle config set --local path 'vendor/bundle'
           bundle install
     
       to install the gems into ./vendor/bundle/, or you can enter your password
       and install the bundled gems to RubyGems using sudo.
     
       Password: 
     
     ```

     可以根据它的提示在项目创建`vendor/bundle`来存放一些需要的依赖项,否则会安装到系统里面,需要输入口令来验证管理员权限

9.   可选 配置`_config.yml`文件

10.   可选 在本地测试站点`bundle exec jekyll serve`

      通常会有这样一个错误:

      ```bash
      Configuration file: /mnt/d/yangshuo2020.github.io/docs/_config.yml
      To use retry middleware with Faraday v2.0+, install `faraday-retry` gem
                  Source: /mnt/d/yangshuo2020.github.io/docs
             Destination: /mnt/d/yangshuo2020.github.io/docs/_site
       Incremental build: disabled. Enable with --incremental
            Generating... 
             Jekyll Feed: Generating feed for posts
                          done in 0.366 seconds.
                          Auto-regeneration may not work on some Windows versions.
                          Please see: https://github.com/Microsoft/BashOnWindows/issues/216
                          If it does not work, please upgrade Bash on Windows or run Jekyll with --no-watch.
       Auto-regeneration: enabled for '/mnt/d/yangshuo2020.github.io/docs'
      /var/lib/gems/3.0.0/gems/jekyll-3.9.2/lib/jekyll/commands/serve/servlet.rb:3:in `require': cannot load such file -- webrick (LoadError)
              from /var/lib/gems/3.0.0/gems/jekyll-3.9.2/lib/jekyll/commands/serve/servlet.rb:3:in `<top (required)>'
              from /var/lib/gems/3.0.0/gems/jekyll-3.9.2/lib/jekyll/commands/serve.rb:184:in `require_relative'
              from /var/lib/gems/3.0.0/gems/jekyll-3.9.2/lib/jekyll/commands/serve.rb:184:in `setup'
              from /var/lib/gems/3.0.0/gems/jekyll-3.9.2/lib/jekyll/commands/serve.rb:102:in `process'
              from /var/lib/gems/3.0.0/gems/jekyll-3.9.2/lib/jekyll/commands/serve.rb:93:in `block in start'
              from /var/lib/gems/3.0.0/gems/jekyll-3.9.2/lib/jekyll/commands/serve.rb:93:in `each'
              from /var/lib/gems/3.0.0/gems/jekyll-3.9.2/lib/jekyll/commands/serve.rb:93:in `start'
              from /var/lib/gems/3.0.0/gems/jekyll-3.9.2/lib/jekyll/commands/serve.rb:75:in `block (2 levels) in init_with_program'
              from /var/lib/gems/3.0.0/gems/mercenary-0.3.6/lib/mercenary/command.rb:220:in `block in execute'
              from /var/lib/gems/3.0.0/gems/mercenary-0.3.6/lib/mercenary/command.rb:220:in `each'
              from /var/lib/gems/3.0.0/gems/mercenary-0.3.6/lib/mercenary/command.rb:220:in `execute'
              from /var/lib/gems/3.0.0/gems/mercenary-0.3.6/lib/mercenary/program.rb:42:in `go'
              from /var/lib/gems/3.0.0/gems/mercenary-0.3.6/lib/mercenary.rb:19:in `program'
              from /var/lib/gems/3.0.0/gems/jekyll-3.9.2/exe/jekyll:15:in `<top (required)>'
              from /usr/local/bin/jekyll:25:in `load'
              from /usr/local/bin/jekyll:25:in `<main>'
      ```

      从网上搜索到的解决办法:从 Ruby 3.0 开始 webrick 已经不在绑定到 Ruby 中了，请参考链接： [Ruby 3.0.0 Released](https://www.ruby-lang.org/en/news/2020/12/25/ruby-3-0-0-released/) 中的说明,webrick 需要手动进行添加`bundle add webrick`

11.   提交推送到github上的仓库

      ```bash
      git add .
      git commit -m 'Initial GitHub pages site with Jekyll'
      git remote add origin https://github.com/yangshuo2020/yangshuo2020.github.io
      git push -u origin master
      ```

12.   按照上面的流程编写需要的页面和帖子

​	可能遇到的问题:

​	`  GitHub Metadata: No GitHub API authentication could be found. Some fields may be missing or have incorrect data.`

