# 基于LVGL与嵌入式系统的AI助手(未完成)

## 项目简介
这是一个基于 Orange Pi5 pro 的嵌入式平台开发的智能AI助手，集成了 GPT 人工智能聊天功能、音乐播放和多媒体交互等功能，界面UI采用LVGL开发。

## 功能特点
- 支持智能语音交互（讯飞星火 Spark4.0 Ultra大模型）
- 多媒体控制功能（音乐播放等功能(未定)）
- 自定义 UI 界面（基于 LVGL）
- 嵌入式环境下的高效资源管理
- 支持语音唤醒和语音识别功能

## 技术栈
- 嵌入式开发板：Orange Pi
- 图形界面库：LVGL
- 人工智能模型：GPT
- 开发语言：C/C++，Python

## 部署流程
### LVGL部署
- LVGL版本：LVGL v8.3.11
- 编程环境：Window11 VS Code
- 编译环境：Ubuntu20.04 交叉编译
- 测试平台：orange pi5 pro
- 显示屏：7inch RGB 1024*800
1. 准备：
   - 去LVGL github主页下载三份代码（lv_port_linux_frame_buffer、lvglv8.3.11、lv_drivers v8.3.11）
   - 或者直接下载该工程代码
2. 创建工程
   - 创建lvgl_project文件夹
   - 将下载的lvgl和lv_drivers文件夹复制到上面创建的lvgl_project中
   - 将 lv_port_linux_frame_buffer 文件夹中的 main.c 文件和 makefile 文件复制到 lvgl_project 中
   - 将 lvgl 中的 lv_conf_template.h 文件复制到 lvgl_demo 中并且改名为 lv_conf.h
   - 将 lv_drivers 中的 lv_drv_conf_template.h 文件复制到 lvgl_demo 中并且改名为 lv_drv_conf.h
   - 注：上面lv_conf_template.h和lv_drv_conf_template.h两个文件为模板文件，后续如果LVGL配置出现问题可直接替换重新配置
3.  修改配置
   - 修改lv_drv_conf.h
        - 将 #if 0 改成 #if 1：
        - 
   

