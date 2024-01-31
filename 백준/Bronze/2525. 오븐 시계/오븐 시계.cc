#include <iostream>
using namespace std;

int main()
{
    int h, m, t;
    cin >> h >> m >> t;
    
    int newH, newM;
    newM = m + t;
    if (newM >= 60) {
        newH = h + (newM / 60);
        newM %= 60;
        if (newH >= 24) {
            newH %= 24;
        }
        cout << newH << " " << newM;
    }
    else {
        cout << h << " " << m + t;
    }

    return 0;
}