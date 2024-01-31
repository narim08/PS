#include <iostream>
using namespace std;

int main()
{
    int n, m, start, end, num;
    cin >> n >> m;
    int* a = new int[n+1] {}; //동적할당 및 0으로 초기화

    for (int i = 1; i <= m; i++) {
        cin >> start >> end >> num;
        for (int i = start; i <= end; i++) {
            a[i] = num;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    
    
    return 0;
}