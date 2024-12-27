#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int num = 1e2;
    string str2;
    char str3[num];
    char str[num];
    cin >> str;
    // Fill n fiels
    fill_n(str3, num - 1, 'a');

    // for char type dataset
    cin.getline(str3, num);

    // for string type dataset
    getline(cin, str2);

    // for length of char
    cout << strlen(str) << endl;
    cout << strlen(str3) << endl;
    // for length of string
    cout << str2.length() << endl;

    cout << str << endl;
    cout << str2 << endl;
    cout << str3 << endl;

    // cout << str2[8] << endl;
}