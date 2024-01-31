#include <iostream>
#include <string> //getline()
using namespace std;

int main()
{
    string s;
    int count=0;
    getline(cin, s); //공백 포함 한 줄 입력 받기

    if (s[0] == ' ' && s.length() == 1) { //공백만 입력받은 경우
        cout << 0;
        return 0;
    }
    for (int i = 1; i < s.length()-1; i++) { //시작과 끝 제외
        if (s[i] == ' ') {
            count++;
        }
    }
    cout << count + 1;
    
    return 0;
}