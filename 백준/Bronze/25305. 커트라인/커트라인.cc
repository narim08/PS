#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int j;
		int key = arr[i];
		for (j = i - 1; j >= 0 && arr[j] < key; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;
	}
}

int main(){
	int n, cut=0;
	cin >> n >> cut;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	insertionSort(arr, n);

	cout << arr[cut-1];
	
	return 0;
}