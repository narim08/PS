#include <iostream>
using namespace std;

int main()
{
	int arr[9][9] = {};
	int max = -1, rowMax = -1, colMax = -1;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] > max) {
				max = arr[i][j];
				rowMax = i;
				colMax = j;
			}
		}
	}
	cout << max << "\n";
	cout << rowMax+1 << " " << colMax+1;

	return 0;
}