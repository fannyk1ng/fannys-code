#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " * " << i << " = " << i * j;

            // ���������ʽ���������ÿ�����һ��Ԫ�أ�����Ʊ��
            if (j < i) {
                cout << "   ";
            }
            else {
                cout << endl;  // �����ÿ�����һ��Ԫ�أ�����
            }
        }
    }
    return 0;
}