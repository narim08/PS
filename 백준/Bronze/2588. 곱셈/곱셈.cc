#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int h, m, s;
    h = b / 100;
    m = (b % 100) / 10;
    s = b % 10;
    
    cout << a * s << endl;
    cout << a * m << endl;
    cout << a * h << endl;
    cout << a * b << endl;

    return 0;
}