#include<iostream>
using namespace std;
void InsertSort(int arr[], int len) {
	for (int i = 1; i < len; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
int main() {
	int a[] = { 10,5,4,2,6,8,7,4,2,0,1,3,4,9 };
	int len = sizeof(a)/sizeof(a[0]);
	InsertSort(a, len);
	for (int i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}