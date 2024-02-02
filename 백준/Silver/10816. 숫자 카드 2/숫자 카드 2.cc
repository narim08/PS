#include <iostream>
#include <map>
using namespace std;

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m, num;
	cin >> n;
	map<int, int> map;
	
	for (int i = 0; i < n; i++) {
		cin >> num;
		auto it = map.find(num);
		if (it==map.end()) { //처음 입력
			map.insert({ num, 1 });
		}
		else { //두번째 이상 입력
			it->second++;
		}
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		cout << map[num] << ' ';
	}
	
	return 0;
}