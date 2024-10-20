// T437186 04-02-02-求数学成绩(1)
/*
# 04-02-02-求数学成绩(1)

## 题目描述

已知小A同学语文和数学两门课程的总分为188分，以及语文成绩为96分，求他的数学成绩。要求用变量实现。

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
    unsigned int points = 188;
    unsigned int chinese = 96;
    unsigned int math = points - chinese;

    cout << math << endl;

    return 0;
}
