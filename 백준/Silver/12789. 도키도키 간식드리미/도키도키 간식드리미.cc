#include <iostream>
#include <stack>
using namespace std;

int main(){
	//c, c++의 표준 스트림 동기화 끄기
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, num, j=1;
	cin >> n;
	stack<int>st;
	
	while (n--) {
		cin >> num;
		if (num == j) { //번호표 확인해서 맞으면 바로 보냄
			j++;
		}
		else {
			st.push(num); //안 맞으면 push
		}
		
		while (!st.empty()) { //비어있지 않고
			if (st.top() == j) { //번호표 맞는 동안 계속 pop
				st.pop();
				j++;
			}
			else break;
		}
	}

	if (st.empty()) {
		cout << "Nice" << '\n';
	}
	else {
		cout << "Sad" << '\n';
	}
	
	return 0;
}