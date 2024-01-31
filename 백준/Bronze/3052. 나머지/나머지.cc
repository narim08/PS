#include <iostream>
using namespace std;

int main()
{
    int n, sum=0;
    int a[42] = {};
    for (int i = 0; i < 10; i++) {
        cin >> n;
        a[n % 42]=1;
    }
    for (int i = 0; i < 42; i++) {
        sum += a[i];
    }
    cout << sum;
    
    return 0;
}