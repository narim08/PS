#include <iostream>
#include <string>
using namespace std;

int inverseStr(char* str) {
    char temp;
    temp = str[0];
    str[0] = str[2];
    str[2] = temp;

    string s = str;
    int num = stoi(s);
    return num;
}

int main()
{
    char str1[4], str2[4];
    cin >> str1 >> str2;
    
    int n1, n2;
    n1 = inverseStr(str1);
    n2 = inverseStr(str2);
    
    cout << max(n1, n2);

    return 0;
}