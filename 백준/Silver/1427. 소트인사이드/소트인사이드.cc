#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
	return a > b; //먼저 들어간 수가 더 큼 == 내림차순
}

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, i;
	cin >> n;
	int arr[10];

	for (i = 0; n > 0; i++) { //자릿수 분해해서 배열 저장
		arr[i] = n % 10;
		n /= 10;
	}

	sort(arr, arr + i, compare); //정렬 조건 추가

	for (int j = 0; j < i; j++) {
		cout << arr[j];
	}
	
	return 0;
}