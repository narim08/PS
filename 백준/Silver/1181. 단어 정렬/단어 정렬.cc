#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(string a, string b) {
	if (a.length() == b.length()) {
		return a < b; //사전순
	}
	else {
		return a.length() < b.length(); //길이순
	}
}

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<string> v;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		v.push_back(str);
	}
	
	sort(v.begin(), v.end(), cmp);
	
	cout << v[0] << '\n';
	for (int i = 1; i < n; i++) {
		if (v[i] == v[i - 1]) continue;
		cout << v[i] << '\n';
	}
	
	return 0;
}