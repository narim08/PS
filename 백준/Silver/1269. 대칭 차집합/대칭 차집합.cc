#include <iostream>
#include <set>
using namespace std;

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n1, n2, e;
	cin >> n1 >> n2;
	set<int>s1, s2;

	for (int i = 0; i < n1; i++) {
		cin >> e;
		s1.insert(e);
	}
	for (int i = 0; i < n2; i++) {
		cin >> e;
		s2.insert(e);
	}
	//copy
	set<int>s3(s1); //s3는 안 건듦
	set<int>s4(s2); //s4는 안 건듦

	//A-B
	for (auto it = s3.begin(); it != s3.end(); it++) {
		if (s2.find(*it) != s2.end()) {
			s1.erase(*it);
		}
	}
	//B-A
	for (auto it = s4.begin(); it != s4.end(); it++) {
		if (s3.find(*it) != s3.end()) {
			s2.erase(*it);
		}
	}

	cout << s1.size() + s2.size();
	

	return 0;
}