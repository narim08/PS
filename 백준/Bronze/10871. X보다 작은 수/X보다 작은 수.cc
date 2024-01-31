#include <iostream>
using namespace std;

int main()
{
    int n, x, b; //n개 수열, 기준 수, 원소 
    cin >> n >> x;
    int* a = new int[n]; //n개 수열 동적할당

    for (int i = 0; i < n; i++) { //수열 저장
        cin >> b;
        a[i] = b;
    }
    for (int i = 0; i < n; i++) { //작은 수 출력
        if (a[i] < x) {
            cout << a[i] << " ";
        }
    }

    return 0;
}