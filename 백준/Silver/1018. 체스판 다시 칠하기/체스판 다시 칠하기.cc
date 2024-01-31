#include <iostream>
#include<string>
#include<algorithm> //min 함수
using namespace std;

//두가지 경우의 올바른 체스판 설정
string WB[8];
string BW[8];
void setBoard() {
	for (int i = 0; i < 8; i++) {
		if (i % 2 == 0) {
			WB[i] = "WBWBWBWB";
			BW[i] = "BWBWBWBW";
		}
		else {
			WB[i] = "BWBWBWBW";
			BW[i] = "WBWBWBWB";
		}
	}
}
//W로 시작하는 체스판에서 다시 칠해야 되는 칸 계산
int wbCnt(int x, int y, string*board) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			//시작점(x,y)로부터 8칸까지 비교
			if (board[x + i][y + j] != WB[i][j]) cnt++;
		}
	}
	return cnt;
}
//B로 시작하는 체스판 계산에서 다시 칠해야 되는 칸 계산
int bwCnt(int x, int y, string* board) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			//시작점(x,y)로부터 8칸까지 비교
			if (board[x + i][y + j] != BW[i][j]) cnt++;
		}
	}
	return cnt;
}

int main()
{
	string board[50];
	setBoard();

	int n, m, minCnt = 65; //8*8 모두 다시 칠하면 최대 64번
	cin >> n >> m;
	cin.ignore(); //개행문자 무시, 입력 버퍼 비움

	for (int i = 0; i < n; i++) {
		getline(cin, board[i]);
	}

	//차례대로 8칸씩 잘라서 최솟값 비교
	for (int i = 0; i + 8 <= n; i++) {
		for (int j = 0; j+8 <= m; j++) {
			int temp = min(wbCnt(i, j, board), bwCnt(i, j, board));
			if (temp < minCnt) minCnt = temp;
		}
	}
	cout << minCnt;

	return 0;
}