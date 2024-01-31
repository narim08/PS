#include <iostream>
using namespace std;

int main()
{
	int row, col, add;
	cin >> row >> col;

	// 2차원 배열 동적할당 하면서 입력 값으로 저장
	int** mat = new int*[row]; //행 할당
	for (int i = 0; i < row; i++) { 
		mat[i] = new int[col]; //열 할당
		for (int j = 0; j < col; j++) {
			cin >> mat[i][j];
		}
	}
	// 두번째 배열 값은 첫번째 배열에 바로 더함
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> add;
			mat[i][j] += add;
		}
	}
	// 출력
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << mat[i][j]<<" ";
		}
		cout << "\n";
	}
	// 메모리 해제
	for (int i = 0; i < row; i++) {
		delete[] mat[i];
	}
	delete[] mat;

	return 0;
}