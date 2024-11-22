#include <iostream>
#include <deque>
using namespace std;

int main() {
    
    int N;
    cin >> N;

    deque<pair<int, int>> d; //풍선 index, 종이에 적힌 수
    for (int i = 1; i <= N; i++) {
        int n;
        cin >> n;
        d.push_back({ i, n });
    }

    for (int i = 1; i <= N; i++) { 
        auto move = d.front();
        cout << move.first << " ";
        d.pop_front();

        if (d.empty()) //마지막 출력 후 pop하면 for문 종료
            break;

        if (move.second > 0) { // -> 방향 이동
            move.second--; //이미 앞으로 한번 갔으니까 뺌
            for (int j = 0; j < move.second; j++) {
                d.push_back(d.front());
                d.pop_front();
            }
        }
        else { // <- 방향 이동
            //위에서 front를 pop해도 back은 영향없어서 안 뺌
            for (int j = 0; j < abs(move.second); j++) { 
                d.push_front(d.back());
                d.pop_back();
            }
        }
    }
    return 0;
}