#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m, num;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		auto upper = upper_bound(arr, arr + n, num);
		auto lower = lower_bound(arr, arr + n, num);
		cout << upper - lower << ' ';
	}
	
	return 0;
}