#include <iostream>
#include <set>
using namespace std;

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	set <string> s1,s2;
	string str;

	for (int i = 0; i < n; i++) {
		cin >> str;
		s1.insert(str);
	}
	for (int i = 0; i < m; i++) {
		cin >> str;
		if (s1.find(str) != s1.end()) {
			s2.insert(str);
		}
	}
	cout << s2.size() << "\n";
	for (auto it = s2.begin(); it != s2.end(); it++) {
		cout << *it << "\n";
	}

	return 0;
}