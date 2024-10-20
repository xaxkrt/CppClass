// T437189 04-02-05-求女生人数
/*
# 04-02-05-求女生人数

## 题目描述

某班有49名学生，其中男生25名，请问女生有多少人？要求用变量实现。

## 输入格式

本题无输入。

## 输出格式

输出占一行，为求得的答案。

## 提示

### 本题出处
本题源自以下教材的编程习题：王桂平, 雷雪林编著. 小学生C++编程启蒙.
*/

#include <iostream>
#include <ostream>
using std::cout;
using std::endl;

int main() {
    unsigned int students = 49;
    unsigned int boy = 25;
    unsigned int girl = students - boy;

    cout << girl << endl;

    return 0;
}
