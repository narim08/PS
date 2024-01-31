#include <iostream>
using namespace std;

int main()
{
    int* a = new int[9];
    int max = 0, maxIndex=0;
    for (int i = 1; i <= 9; i++) {
        cin >> a[i];
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
    }
    cout << max << "\n" << maxIndex;

    return 0;
}