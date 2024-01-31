#include <iostream>
using namespace std;

int main()
{
	int n, bk, count = 0;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		bk = 0;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			for (int k = j+1; k < s.length(); k++) {
				if (s[j] == s[k] && s[k - 1] != s[k]) {
					bk = 1; //다시 cin으로 돌아감
					break;
				}
			}
			if (bk == 1) break;
		}
		if (bk == 0) count++;
	}

	cout << count;

	return 0;
}