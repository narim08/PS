#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;
	string name, cmd;

	cin >> n >> m;
	map<string, int> map;
	string* arr = new string[n+1];

	for (int i = 1; i <= n; i++) {
		cin >> name;
		map.insert({name, i});
		arr[i] = name;
	}
	for (int i = 0; i < m; i++) {
		cin >> cmd;
		if (cmd[0] > '9') { //cmd==string
			auto it = map.find(cmd);
			cout << it->second << "\n";
		}
		else {
			int index = stoi(cmd);
			cout << arr[index] << "\n";
		}
	}
	
	return 0;
}