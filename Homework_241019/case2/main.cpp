// 案例2: 时间换算

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
    unsigned int hours;
    unsigned int min;
    unsigned int sec;

    cout << "请输入小时数: ";
    cin >> hours;
    cout << "请输入分钟数: ";
    cin >> min;
    cout << "请输入秒钟数: ";
    cin >> sec;

    unsigned int resu = hours * 3600 + min * 60 + sec;
    cout << hours << "时" << min << "分" << sec << "秒 = " << resu << "秒"
         << endl;

    return 0;
}
