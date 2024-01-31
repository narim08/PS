#include <iostream>
using namespace std;

void insertionSort(int*arr, int n) {
	for (int i = 1; i < n; i++) {
		int j;
		int key = arr[i]; //key값 복사
		
		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j+1] = key; //앞선 for문에서 j가 감소되었기 때문에 1더한 자리가 맞음
	}
}

int main(){
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	insertionSort(arr, n); //삽입 정렬

	for (int i = 0; i < n; i++) {
		cout << arr[i]<<'\n';
	}

	return 0;
}