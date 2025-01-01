#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;
int main()
{
    int s = 2, t = 4, u = 6;
    stringstream ss;

    // Add integers to the stream
    ss << s << ',' << t << ',' << u;

    string str = ss.str();
    cout << str << endl; // Output: 246

    string str2;

    // Append integers as strings
    str2.append(to_string(s));
    str2.append(to_string(t));
    str2.append(to_string(u));

    cout << str2 << endl; // Output: 246
    return 0;
}