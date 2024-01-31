#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) { //위 절반 삼각형
		for (int j = 1; j <= n - i; j++) { //n-i개 공백
			cout << " ";
		}
		for (int k = 1; k <= 2*i - 1; k++) { //2i-1개 별
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = n - 1; i > 0; i--) { //아래 절반 삼각형
		for (int j = 1; j <= n - i; j++) { //n-i개 공백
			cout << " ";
		}
		for (int k = 1; k <= 2 * i - 1; k++) { //2i-1개 별
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}