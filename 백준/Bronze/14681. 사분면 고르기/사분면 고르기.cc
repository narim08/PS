#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if (x > 0) { //제 1, 4사분면
        if (y > 0) {
            cout << "1";
        }
        else {
            cout << "4";
        }
    }
    else { //제 2, 3사분면
        if (y > 0) {
            cout << "2";
        }
        else {
            cout << "3";
        }
    }

    return 0;
}