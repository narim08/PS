#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;
	while (getline(cin, str)) { //공백 포함 한 줄 입력 받기 반복
		if (str == ".") break; //입력 종료 조건

		int flag = 0; //문제 조건에 안 맞을 경우 업뎃
		stack<char> st;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				st.push(str[i]);
			}
			else if (str[i] == ')') {
				if (!st.empty() && st.top() == '(') {
					st.pop();
				}
				else {
					flag = 1; break;
				}
			}
			else if (str[i] == ']') {
				if (!st.empty() && st.top() == '[') {
					st.pop();
				}
				else {
					flag = 1; break;
				}
			}
		}

		if (st.empty() && flag == 0) {
			cout << "yes" << '\n';
		}
		else {
			cout << "no" << '\n';
		}
	}
	
	return 0;
}