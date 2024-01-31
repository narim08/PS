#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'd' && s[i+1] == 'z' && s[i+2] == '=') {
			count++;
			i += 2;
		}
		else if (s[i] == 'l' && s[i+1] == 'j') {
			count++;
			i += 1;
		}
		else if (s[i] == 'n' && s[i+1] == 'j') {
			count++;
			i += 1;
		}
		else if (s[i] == '-' || s[i] == '=') {
			continue;
		}
		else {
			count++;
		}
	}

	cout << count;

	return 0;
}