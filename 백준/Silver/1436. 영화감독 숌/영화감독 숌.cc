#include <iostream>
using namespace std;

int main(){
	int n, cnt=0, title=665;
	cin >> n;

	while (cnt != n) {
		title++;
		int temp = title;

		while (temp != 0) {
			if (temp % 1000 == 666) {
				cnt++;
				break;
			}
			else {
				temp /= 10;
			}
		}
	}
	cout << title;

	return 0;
}