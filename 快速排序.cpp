#include<iostream>
using namespace std;
void quickSort(int nums[], int start, int end) {
	int base = nums[start];
	int left = start;
	int right = end;
	if (start >= end) {
		return;
	}
	while (left < right) {
		while (left < right && nums[right]>=base) {
			right--;
		}
		nums[left] = nums[right];
		while (left < right && nums[left] <= base) {
			left++;
		}
		nums[right] = nums[left];
	}
	nums[left] = base;
	quickSort(nums, start, left - 1);
	quickSort(nums, left + 1, end);
}
int main() {
	int num[] = { 2,1,4,5,3,6,9,8,10,7 };
	int len = sizeof(num) / sizeof(num[0]);
	quickSort(num, 0, len - 1);
	for (int i = 0; i < len; i ++ ) {
		cout << num[i] << " ";
	}
	return 0;
}