#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3;
    int sum = 0;
    cin >> m1 >> m2 >> m3;
    if (m1 == m2 && m2 == m3){ //case 1
        sum = m1 * 1000 + 10000;
    }
    else if (m1 == m2 || m2 == m3) { //case 2
        sum = m2 * 100 + 1000;
    }
    else if (m1 == m3) {
        sum = m1 * 100 + 1000;
    }
    else { //case 3
        if (m1 > m2 && m1 > m3) {
            sum = m1 * 100;
        }
        else if (m2 > m1 && m2 > m3) {
            sum = m2 * 100;
        }
        else {
            sum = m3 * 100;
        }
    }
    cout << sum;

    return 0;
}