// T437190 04-02-06-求身高
/*
# 04-02-06-求身高

## 题目描述

小A去年是136厘米，今年长高了5厘米，请问现在身高是多少厘米。要求用变量实现，且只定义一个变量。

## 输入格式

本题无输入。

## 输出格式

输出占一行，为求得的答案。

## 提示

### 本题出处
本题源自以下教材的编程习题：王桂平, 雷雪林编著. 小学生C++编程启蒙.
*/

#include <iostream>
using std::cout;
using std::endl;

int main() {
    unsigned int tall = 136;

    cout << tall + 5 << endl;

    return 0;
}
