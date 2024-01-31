#include <iostream>
using namespace std;

int main()
{
	int chess[6] = { 1,1,2,2,2,8 }; //기준
	int input; //찾은 개수

	for (int i = 0; i < 6; i++) {
		cin >> input;
		cout << chess[i] - input << " ";
	}

	return 0;
}