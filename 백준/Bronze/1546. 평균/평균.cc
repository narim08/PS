#include <iostream>
using namespace std;

int main()
{
    int n, max = 0;
    double res = 0;
    cin >> n;
    double* a = new double[n] {};
    for (int i = 0; i < n; i++) {
        cin >> a[i]; //배열 저장
        if (a[i] > max) {
            max = a[i]; //최댓값 저장
        }
    }
    
    for (int i = 0; i < n; i++) { 
        res += a[i] / max * 100;
    }

    printf("%.3lf", res/n);

    delete[] a;
    return 0;
}