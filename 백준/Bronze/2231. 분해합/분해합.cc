#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i < n; i++) {
		int num=i, sum = i;
		while (num != 0) { 
			sum += num % 10;
			num /= 10;
		}
		if (sum == n) {
			cout << i;
			return 0;
		}
	}
	cout << 0;

	return 0;
}