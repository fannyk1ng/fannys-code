#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " * " << i << " = " << i * j;

            // 控制输出格式，如果不是每行最后一个元素，添加制表符
            if (j < i) {
                cout << "   ";
            }
            else {
                cout << endl;  // 如果是每行最后一个元素，换行
            }
        }
    }
    return 0;
}