#include <iostream>
#include <queue>
using namespace std;


int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	queue<int> q;
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	while (q.size() > 1) {
		q.pop();

		int data = q.front();
		q.pop();
		q.push(data);
	}

	cout << q.front();

	return 0;
}