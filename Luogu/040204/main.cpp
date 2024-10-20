// T437188 04-02-04-有几本新书
/*
# 04-02-04-有几本新书

## 题目描述

开学第一周发了6本新书，第二周又发了5本新书，请问总共发了几本新书。要求用变量实现。

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
    unsigned int week1 = 6;
    unsigned int week2 = 5;

    cout << week1 + week2 << endl;

    return 0;
}
