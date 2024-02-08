#include <iostream>
#include <stack>
using namespace std;

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		stack<char> st;
		string str;
		cin >> str;
		int er = 0; //처음부터 ')'가 들어오는 경우 NO

		for (int j = 0; j < str.length(); j++) {
			if (str[j] == '(') {
				st.push(str[j]);
			}
			else if (!st.empty() && str[j] == ')') {
				st.pop();
			}
			else if (st.empty() && str[j] == ')') {
				er = 1;
				break;
			}
		}

		if (!st.empty() || er == 1) {
			cout << "NO" << '\n';
		}
		else {
			cout << "YES" << '\n';
		}
	}
	
	return 0;
}