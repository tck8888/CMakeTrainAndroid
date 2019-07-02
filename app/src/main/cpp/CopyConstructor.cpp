//
// Created by tck on 2019/7/2.
//

#include "CopyConstructor.h"

//构造函数
CopyConstructor::CopyConstructor(int b) {

    a = b;

}

//拷贝构造函数
CopyConstructor::CopyConstructor(const CopyConstructor &c) {
    a = c.a;
}

//析构函数
CopyConstructor::~CopyConstructor() {

}

void CopyConstructor::show() {

}


