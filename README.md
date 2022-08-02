# TPS_10cent_HW

## Description
This is a third-person shooter game project as the homework of a Tencent Game open class.

腾讯公开课UE4 第三人称射击 项目作业

---

## Weekly Update
### **Week 1**
Constructing the basic UE4 C++ project structure. 

The packaged .apk file and the test video have been uploaded to [腾讯微云](https://share.weiyun.com/1ZqM1HJK).

创建基础UE4 C++项目结构，编译UE4引擎，配置Android环境并打包生成.apk文件并实机测试。.apk文件和视频已上传至[腾讯微云](https://share.weiyun.com/1ZqM1HJK)。

### **Week 2**
Independent little project. *Netshoot*

在原项目基础上添加可飞行物件，并且击打物件可以得分。增加游戏时间，时间耗尽则游戏结束。必要代码已上传至[腾讯微云](https://share.weiyun.com/8wVHUARp)。

已知问题：

1. 在获取PlayerController的问题上无法联网分别获取玩家index，因此客户端玩家击打物件无法得分。 可能的方法：Spawn时服务器获取玩家index并在需要时分发至client。
2. 无法让多个会飞的物件随机生成。对于蓝图物件嵌套关系不够熟悉。
