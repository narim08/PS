#include <iostream>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int len = s.length() - 1;
	int count = 0;

	for (int i = 0; i < s.length() / 2; i++) {
		if (s[i] != s[len--]) {
			cout << "0";
			return 0;
		}
	}

	cout << "1";

	return 0;
}