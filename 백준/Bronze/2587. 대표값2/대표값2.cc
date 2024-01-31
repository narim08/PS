#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int j;
		int key = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;
	}
}

int main(){
	int arr[5];
	int avg = 0;

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		avg += arr[i];
	}
	avg /= 5;
	insertionSort(arr, 5); //삽입 정렬
	
	cout << avg << '\n';
	cout << arr[2] << '\n';
	
	return 0;
}