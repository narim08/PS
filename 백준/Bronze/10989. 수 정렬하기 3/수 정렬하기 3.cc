#include <iostream>
using namespace std;

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int arr[10001] = {0};

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr[a] += 1; //해당 숫자를 index로 하는 칸에 카운트 처리
	}

	for (int i = 1; i <= 10000; i++) {
		for (int cnt = arr[i]; cnt > 0; cnt--) {
			cout << i << '\n';
		}
	}
	
	return 0;
}