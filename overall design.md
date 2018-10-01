# 系统设计

本系统是一个集在线教育与社交于一体的平台，用户可在本平台基于文本、音视频的一对一的交流过程中寻求所需帮助或者为需要帮助的用户提供帮助。

用户使用本平台按照一定的流程进行：用户注册登录，浏览平台推荐的信息，通过发布需求来寻求帮助，通过接受委托帮助需要帮助用户，通过搜索查找需要的需求和服务信息等。

用户按照信息的完善程度分为：游客、注册用户和认证用户。游客注册登录成为注册用户，注册用户具有查看请求、查看和修改个人信息的功能，注册用户实名认证后成为认证用户。

![avatar](https://github.com/wenxin0421151623/project/blob/master/pic/yonglituxin.png)

# 模块划分

本平台具体的功能模块主要有：注册登录模块、用户模块、后台管理模块（用户信息记录）、充值模块。

## 模块的层次结构
![avatar](http://thyrsi.com/t6/372/1537198649x-1566679983.jpg)

## 模块的调用关系与模块接口
![avatar](https://github.com/wenxin0421151623/project/blob/master/pic/IPO9.png)
![avatar](https://github.com/wenxin0421151623/project/blob/master/pic/IPO8.png)
![avatar](https://github.com/wenxin0421151623/project/blob/master/pic/IPO1.png)
![avatar](https://github.com/wenxin0421151623/project/blob/master/pic/IPO2.png)
![avatar](https://github.com/wenxin0421151623/project/blob/master/pic/IPO3.png)
![avatar](https://github.com/wenxin0421151623/project/blob/master/pic/IPO4.png)
![avatar](https://github.com/wenxin0421151623/project/blob/master/pic/IPO6.png)
![avatar](https://github.com/wenxin0421151623/project/blob/master/pic/IPO7.png)
![avatar](https://github.com/wenxin0421151623/project/blob/master/pic/IPO5.png)

# 模块功能

## 注册、登录模块

### 用户注册

用户进入社区主页面后，对于第一次登录的用户来说，首先需要注册，单击“注册”按钮即可进入注册界面，注册完成后返回登录界面。游客可以浏览网站内容，无法使用/被使用相关服务。

注册界面用户输入相关信息注册信息，系统后台验证输入信息的合法性，如出现违规信息返回注册界面再次输入相关信息，若信息审核通过，提示用户注册成功，向数据库用户信息表中插入一条记录，并跳转至登录界面。

![avatar](https://github.com/wenxin0421151623/project/blob/master/pic/1zhuce.png)

### 用户登录

用户注册成功后或用户访问网站首页，点击登录，跳转到登录页面。登录页面要求用户输入用户名，密码，以及验证码，用户提交信息后，系统索引数据库查询是否存在此用户。若否，则提示用户不存在；若存在则查询密码是否一致。若否，提示密码错误，并跳转至登录界面；若正确则提示登录成功，跳转至首页。

![avatar](https://github.com/wenxin0421151623/project/blob/master/pic/2denglu.png)

## 用户模块

### 查看用户信息

用户进入个人信息界面后可以调用信息查询功能。系统根据用户的查询条件向数据库用户信息表提取相关信息如：头像、昵称、年龄等信息按照要求进行显示。

![avatar](https://github.com/wenxin0421151623/project/blob/master/pic/3chakanyonghuxinxi.png)

### 修改用户信息

本模块用于用户信息如：基本信息、密码、绑定邮箱、手机等信息修改。用户输入相关信息实时验证合法性，合法提交信息，更新用户信息表。否则，修改无效。

![avatar](https://github.com/wenxin0421151623/project/blob/master/pic/4xiugaiyonghuxinxi.png)

### 查看一对一聊天室

所有一对一聊天室信息在特定的界面显示，用户点击查看某一个具体的信息后，系统查询数据库中一对一聊天室信息表，提取出相关信息进行显示。

### 发布委托

用户在发布委托信息界面输入委托信息，经验证合法性后插入委托信息表，如不合法，则返回再次输入。

![avatar](https://github.com/wenxin0421151623/project/blob/master/pic/6qiuzhu.png)

## 后台管理模块

### 内容管理模块

本模块主要对平台页面显示的内容管理，排序等以及审核用户日常操作等行为。

### 聊天室管理模块

本模块搜集热门话题以聊天室的形式展现，以及审核用户发起的创建聊天室请求信息合法性。

## 充值模块

当用户使用需要充值才能进行的功能时，跳转至充值界面，并展示充值说明。用户选择具体的月费/年费后提交，待确认用户是否了解充值规则以及对充值金额进行确认后，如充值成功，向用户会员数据库插入一条数据，跳转至个人账户页面，显示当前剩余时间，否则返回充值页面。

![avatar](https://github.com/wenxin0421151623/project/blob/master/pic/5goumaihuiyuan.png)
# 数据结构设计

## 类

我们拟用C++来实现，需要以下几个类，并暂时给出所需成员变量。
* User类，成员变量有个人信息，用户类型（游客、注册用户和认证用户），用户状态（处于聊天室，闲逛，离线）。
* Room类，成员变量有房间类型（文字、音频、视频），房间号，房间状态（双人，单人）。
* UserManager类，成员变量有用户（分组）。
* RoomManager类，成员变量有房间。
* Controller类，成员变量有UserManager和RoomManager。

## 查找聊天室

聊天室非常多，因此需要快速找到所需要的聊天室，此处通过Hash实现查找聊天室，所有聊天室有个独立id，把id作为key来进行查找。

# 数据流图

![avatar](http://thyrsi.com/t6/375/1537781356x-1404817844.png)
             
                          figure1

![avatar](http://thyrsi.com/t6/375/1537782422x1822611437.png)
   
                          figure2

# UML类图及代码设计

global_information:

chattingroom chattingroomlist[MAX1];
entrustinfo entrustList[MAX2];
User UserList[MAX3];


fuction_body of some functions in UML diagram:

Register_User::ModifyUserInfo():void
{
     basicinfo->set(...);

}
![avatar](http://thyrsi.com/t6/373/1537450915x-1404749909.png)

![avatar](http://thyrsi.com/t6/373/1537450320x-1566679839.png)

![avatar](http://thyrsi.com/t6/373/1537450345x-1566679839.png)

# UI interface

![avatar](http://thyrsi.com/t6/373/1537490330x-1566679485.png)

![avatar](http://thyrsi.com/t6/373/1537490422x-1566680256.png)

![avatar](http://thyrsi.com/t6/373/1537490666x-1566680214.png)

![avatar](http://thyrsi.com/t6/373/1537490497x-1566679983.png)

![avatar](http://thyrsi.com/t6/373/1537490577x-1566679869.png)






