#include <iostream>
using namespace std;

int main()
{
    int n, m, start, end;
    cin >> n >> m;
    int* a = new int[n+1];

    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }
    
    for (int i = 0; i < m; i++) {
        cin >> start >> end;
        if (start != end) { //같은 경우는 교환해도 똑같음
            for (int i = 0; i <= (end - start) / 2; i++) {
                swap(a[start + i], a[end - i]);
            }
        }
    }
    
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}