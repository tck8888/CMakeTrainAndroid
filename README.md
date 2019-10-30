# MakeTrainAndroid

## CMakeLists.txt文件详解

### cmake_minimum_required(VERSION 3.4.1)

    指定cmake最低支持的版本

### aux_source_directory(. DIR_SRCS)

    查找当前目录所有的源文件并将源文件列表保存到DIR_SRCS变量
    不能查找子目录
    
