// T437178 04-01-01-输出大写字母、小写字母和数字
/*
 # 04-01-01-输出大写字母、小写字母和数字

## 题目描述

输出3行，第一行是26个大写字母，第2行是26个小写字母，第3行是数字1234567890。

## 输入格式

本题无输入。

## 输出格式

按题目要求输出3行信息。

## 提示

### 本题出处
本题源自以下教材的编程习题：王桂平, 雷雪林编著. 小学生C++编程启蒙.
 */

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::to_string;

int main() {
    // 输出 A - Z
    for (char i = 65; i <= 90; i++) {
        cout << i;
    }
    cout << endl;

    // 输出 a - z
    for (char i = 97; i <= 122; i++) {
        cout << i;
    }
    cout << endl;

    // 输出 1 - 0
    for (int i = 1; i <= 10; i++) {
        cout << to_string(i % 10);
    }
    cout << endl;

    return 0;
}
