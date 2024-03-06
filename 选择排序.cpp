#include<iostream>
using namespace std;
void SelectionSort(int a[], int len) {
	int i, j, min;
	for (i = 0; i < len; i++) {
		min = i;
		for (j = i + 1; j < len; j++) {
			if (a[j] < a[min])
				min = j;
		}
		swap(a[min], a[i]);			
	}
}
int main() {
	int a[] = { 10,1,5,4,3,2,8,9,6,7 };
	SelectionSort(a, 10);
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << '\n';
	return 0;
}