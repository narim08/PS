#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int N, M;
    cin >> N;
    vector <int> qs; //queue or stack
    deque <int> q;

    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;
        qs.push_back(n);
    }

    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;
        if (qs[i]==0) { //queue일때만
            q.push_front(n); //초기는 역순 입력
        }
    }

    cin >> M;
    for (int i = 0; i < M; i++) {
        int n;
        cin >> n;
        q.push_back(n); //기존 큐대로 입력
        cout << q.front() << " ";
        q.pop_front();
    }

    return 0;
}