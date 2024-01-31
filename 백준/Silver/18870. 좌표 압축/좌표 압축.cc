#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	vector<int> v2(v); //중복제거할 벡터에 복사
	sort(v2.begin(), v2.end()); //오름차순 정렬
	v2.erase(unique(v2.begin(), v2.end()), v2.end()); //중복 제거

	for (int i = 0; i < n; i++) {
		auto it = lower_bound(v2.begin(), v2.end(), v[i]);
		cout << it - v2.begin() << ' ';
	}

	return 0;
}