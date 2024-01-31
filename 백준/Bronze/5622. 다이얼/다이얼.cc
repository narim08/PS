#include <iostream>
using namespace std;

int main()
{
	string s;
	int time = 0;
	int alpa[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		time += alpa[(int)s[i]-'A'];
	}
	
	cout << time;

	return 0;
}