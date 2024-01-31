#include <iostream>
using namespace std;

int main()
{
    int s, n, a, b, sum = 0;
    cin >> s >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        sum += (a * b);
    }
    if (sum == s) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}