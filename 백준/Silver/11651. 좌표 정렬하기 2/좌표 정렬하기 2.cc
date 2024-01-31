#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int>p1, pair<int, int>p2) {
	if (p1.second != p2.second) {
		return p1.second < p2.second;
	}
	else {
		return p1.first < p2.first;
	}
}

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x, y;
	cin >> n;
	vector<pair<int, int>> v;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.push_back({ x,y });
	}
	
	sort(v.begin(), v.end(), cmp);
	
	for (int i = 0; i < n; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}
	
	return 0;
}