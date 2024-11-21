#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N,k;
    cin >> N >> k;
    
    queue<int> q;
    for(int i=1; i<=N; i++) {
        q.push(i);
    }
    
    int value=1;
    cout << "<";
    while(!q.empty()) {
        for(int i=1; i<k; i++) {
            value = q.front();
            q.pop();
            q.push(value);
        }
        cout << q.front();
        if(q.size() > 1)
            cout << ", ";
        q.pop();
    }
    cout << ">";
}