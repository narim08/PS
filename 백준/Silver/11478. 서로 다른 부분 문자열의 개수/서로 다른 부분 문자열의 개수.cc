#include <iostream>
#include <set>
using namespace std;

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	set<string>s;
	string inputStr;
	cin >> inputStr;

	for (int j = 0; j < inputStr.size(); j++) { //문자열에서 시작 문자 한 칸씩 업뎃
		string str = "";
		for (int i = j; i < inputStr.size(); i++) { //끝나는 문자 개수 달라짐
			str += inputStr[i];
			s.insert(str);
		}
	}
	cout << s.size();

	return 0;
}