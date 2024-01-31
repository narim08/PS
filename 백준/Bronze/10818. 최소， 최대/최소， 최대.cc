#include <iostream>
using namespace std;

int main()
{
    int n, a;
    cin >> n;
    int min = 1000000, max = -1000000; //범위 값으로 초기화
    for (int i = 0; i < n; i++) { //배열 저장하면서 비교
        cin >> a;
        if (a < min) {
            min = a;
        }
        if (a > max) {
            max = a;
        }
    }
    cout << min << " " << max;

    return 0;
}