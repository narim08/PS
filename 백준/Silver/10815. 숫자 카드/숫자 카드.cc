#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m, card;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n); //먼저 정렬하고 이분탐색

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> card;
		cout << binary_search(arr, arr + n, card) << ' ';
	}
	
	return 0;
}