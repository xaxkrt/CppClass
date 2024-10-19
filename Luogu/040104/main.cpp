// T437181 04-01-04-倒着输出大写字母、小写字母
/*
# 04-01-04-倒着输出大写字母、小写字母

## 题目描述

输出2行，第一行是倒着排列的26个大写字母，第2行是倒着排列的26个小写字母。

## 输入格式

本题无输入。

## 输出格式

按题目要求输出2行信息。

## 提示

### 本题出处
本题源自以下教材的编程习题：王桂平, 雷雪林编著. 小学生C++编程启蒙.
*/

#include <iostream>
using std::cout;
using std::endl;

int main() {
    // 输出 Z - A
    for (char i = 90; i >= 65; i--) {
        cout << i;
    }
    cout << endl;

    // 输出 z - a
    for (char i = 122; i >= 97; i--) {
        cout << i;
    }
    cout << endl;

    return 0;
}
