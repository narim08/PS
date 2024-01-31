#include <iostream>
using namespace std;

int main()
{
    int n, m, num1, num2;
    cin >> n >> m;
    int* a = new int[n+1];
    
    for (int i = 1; i <= n; i++) { //바구니 번호로 초기화
        a[i] = i;
    }

    for (int i = 1; i <= m; i++) { //교환
        cin >> num1 >> num2;
        int temp=0;
        temp = a[num1];
        a[num1] = a[num2];
        a[num2] = temp;
    }
    
    for (int i = 1; i <= n; i++) { //출력
        cout << a[i] << " ";
    }
    
    delete [] a; //동적할당 해제
    return 0;
}