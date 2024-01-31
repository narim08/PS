#include <iostream>
using namespace std;

int main()
{
    int a[26], n=0;
    fill(a, a + 26, -1); //초기화
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) { //문자열 끝까지 반복
        n = s[i] - 'a'; //a=0부터로 연산
        if (a[n] == -1) { //처음 등장할 때만 저장
            a[n] = i;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        cout << a[i] << " ";
    }

    return 0;
}