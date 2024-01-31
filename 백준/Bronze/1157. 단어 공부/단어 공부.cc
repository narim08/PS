#include <iostream>
using namespace std;

int main()
{
	int alpa[26] = {}; //대소문자 구분x, 빈도수 저장
	int max = -1;
	string s, res;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'a') { //소문자인 경우
			alpa[(int)s[i] - 'a']++; //a를 0부터 시작
		}
		else { //대문자인 경우
			alpa[(int)s[i] - 'A']++; //A를 0부터 시작
		}
	}
	
	for (int i = 0; i < 26; i++) {
		if (alpa[i] > max) {
			max = alpa[i];
			res = 'A' + i;
		}
		else if (alpa[i] == max) {
			res = '?';
		}
	}
	
	cout << res;

	return 0;
}