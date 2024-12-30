#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    string str1 = "abc";
    char a[10];
    string str2 = "xyz";
    cout << str1.compare(str2) << endl;
    cout << str1.at(2) << endl;
    cout << str1.length() << endl;
    str1.copy(a, 2);
    cout << a << endl;
    cout << str2.substr(1, 2) << endl;
    str1.pop_back();
    cout << str1 << endl;
    str1.push_back('d');
    cout << str1 << endl;
    cout << str1.find("b") << endl;
    cout << (int)str1.find("b", 2) << endl; // output is 4294967295 which is -1 in int
    cout << str2.insert(1, str2) << endl;
    cout << str2.insert(1, "abcd") << endl;
    cout << str2.size() << endl;
    cout << str2.length() << endl;
    cout << str2.append(str2) << endl;
    cout << str2.append("abcd") << endl;
    sort(str2.begin(), str2.end());
    cout << str2 << endl;
    reverse(str1.begin(), str1.end());
    cout << str1 << endl;

    return 0;
}