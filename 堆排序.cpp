#include<iostream>
using namespace std;
// 维护堆的性质，保证堆顶元素最大
// arr为存储堆的数组
// len为数组长度
//i为待维护的下标节点，堆顶元素
void heapify(int arr[], int len, int i) {
	int largest = i;
	int leftson = i * 2 + 1;
	int rightson = i * 2 + 2;
	if (leftson < len && arr[largest] < arr[leftson])
		largest = leftson;
	if (rightson < len && arr[largest] < arr[rightson])
		largest = rightson;
	if (largest != i) {
		swap(arr[largest], arr[i]);
		heapify(arr, len, largest);
	}
}
//堆排序
void heapSort(int arr[], int len) {
	//建堆
	int i = len / 2 - 1;//尾父节点
	for (i; i >= 0; i--) 
		heapify(arr, len, i);
	//排序开始！
	for (int j = len - 1; j >= 0; j--) {
		swap(arr[j], arr[0]);
		heapify(arr, j, 0);
	}
}
int main() {
	int arr[] = { 2,10,5,3,7,8,6,6,5,4,9,1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	heapSort(arr, len);
	cout << "排序后的数组为：" << "\n";
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}