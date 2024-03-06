#include<iostream>
using namespace std;
void ShellSort(int* a, int len) {
	//设置步长，即增量。
	int j, key, i, n;
	for (n=len/2; n > 0; n = n / 2) {
		for ( i = n; i < len; i++) {
			 key = a[i];
			for ( j = i; j >= n && key < a[j - n]; j = j - n) {
				a[j] = a[j - n];
			}
			a[j] = key;
		}
	}
}
int main() {
	int a[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 1};
	int len = sizeof(a) / sizeof(a[0]);
	ShellSort(a, len);
	for (int i = 0; i < len; i++) {
		cout << a[i] << " ";
	}
	return 0;
}