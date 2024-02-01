#include <iostream>
#include <set>
using namespace std;

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	string name, log;
	set<string> s;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name >> log;
		if (log == "enter") {
			s.insert(name);
		}
		else {
			s.erase(name);
		}
	}
	for (auto it = s.rbegin(); it != s.rend(); it++) {
		cout << *it << "\n";
	}
	
	return 0;
}