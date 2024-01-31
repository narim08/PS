#include <iostream>
using namespace std;

int main()
{
	int n, m, sum=0, max=0;
	int I, J, K;
	cin >> n >> m;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		for (int j = n - 2; j >= 0; j--) {
			if (j == i) continue;
			for (int k = n - 3; k >= 0; k--) {
				if (k == i || k == j) continue;

				sum = arr[i] + arr[j] + arr[k];
				if (sum<=m && sum>max) {
					max = sum;
				}
			}
		}
	}
	cout << max;

	return 0;
}