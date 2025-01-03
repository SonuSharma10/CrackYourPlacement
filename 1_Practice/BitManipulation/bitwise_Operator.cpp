#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 6;
    cout << (a & b) << endl;  // 4 bitwise AND      |    rule: 1 & 1 = 1, 1 & 0 = 0, 0 & 0 = 0
                              // i.e if both are 1 then 1 else 0
    cout << (a | b) << endl;  // 7 bitwise OR       |    rule: 1 | 1 = 1, 1 | 0 = 1, 0 | 0 = 0
                              // i.e if any one is 1 then 1 else 0
    cout << (a ^ b) << endl;  // 3 bitwise XOR      |    rule: 1 ^ 1 = 0, 1 ^ 0 = 1, 0 ^ 0 = 0
                              // i.e if both are same then 0 else 1
    cout << (a << 1) << endl; // 10 left shift      |    formula: a * 2^b
    cout << (b << 2) << endl; // 24 left shift
    cout << (a >> 1) << endl; // 2 right shift      |    formula: a / 2^b
    cout << (b >> 2) << endl; // 1 right shift
    cout << (~a) << endl;     // -6 bitwise NOT     |    formula: -a - 1
    return 0;
}