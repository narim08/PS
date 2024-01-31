#include <iostream>
using namespace std;

int main()
{
    int n, a, v;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a;
        arr[i] = a;
    }
    cin >> v;
    a = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == v) {
            a += 1;
        }
    }
    cout << a;
    return 0;
}