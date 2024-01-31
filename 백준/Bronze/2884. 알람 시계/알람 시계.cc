#include <iostream>
using namespace std;

int main()
{
    int h, m;
    cin >> h >> m;

    int newH, newM;
    newM = m - 45;
    if (newM < 0) {
        newM = 60 + newM;
        newH = h - 1;
        if (newH < 0) {
            newH = 24 + newH;
        }
        cout << newH << " " << newM;
    }
    else {
        cout << h << " " << newM;
    }

    return 0;
}