// T437179 04-01-02-输出星号三角形
/*
# 04-01-02-输出星号三角形

## 题目描述

用C++的cout语句输出以下星号三角形。
```txt
*
**
***
****
*****
```

## 输入格式

本题无输入。

## 输出格式

按题目要求输出星号三角形。

## 提示

### 本题出处
本题源自以下教材的编程习题：王桂平, 雷雪林编著. 小学生C++编程启蒙.
*/

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << string(i, '*');
        cout << endl;
    }

    return 0;
}
