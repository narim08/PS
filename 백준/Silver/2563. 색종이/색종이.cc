#include <iostream>
using namespace std;

int main()
{
	bool arr[101][101] = {}; //칠했는지 체크하는 용
	int n, w, h, count = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> w >> h;
		for (int j = h+10; j > h; j--) {
			for (int k = w; k < w + 10; k++) {
				if (!arr[j][k]) { //처음 칠할 때만 카운트
					arr[j][k] = 1;
					count++;
				}
			}
		}
	}
	cout << count;

	return 0;
}