#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m, count = 0;
	cin >> n >> m;
	string* arr = new string[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n); //사전순 정렬

	for (int i = 0; i < m; i++) {
		string str;
		cin >> str;
		if (binary_search(arr, arr + n, str)) {
			count++;
		}
	}
	cout << count;
	return 0;
}