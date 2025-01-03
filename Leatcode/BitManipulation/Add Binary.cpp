// Given two binary strings a and b, return their sum as a binary string.

// Example 1:

// Input: a = "11", b = "1"
// Output: "100"
// Example 2:

// Input: a = "1010", b = "1011"
// Output: "10101"

// Constraints:

// 1 <= a.length, b.length <= 104
// a and b consist only of '0' or '1' characters.
// Each string does not contain leading zeros except for the zero itself.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string addBinary(string a, string b)
    {
        int n1 = a.length() - 1;
        int n2 = b.length() - 1;
        int carry = 0, total;
        string ans = "";

        while (n1 >= 0 || n2 >= 0)
        {
            total = carry;
            if (n1 >= 0)
            {
                // using a[n1]-'0' gives a int and only works for 0-9 char
                // because ASCII
                total = (a[n1] - '0') + total;
                n1--;
            }
            if (n2 >= 0)
            {
                // If we get i number in string like '32' use stoi('32') to
                // convert it into int
                total = (b[n2] - '0') + total;
                n2--;
            }
            carry = total / 2;
            ans = ans + to_string(total % 2);
        }
        if (carry)
            ans = ans + to_string(carry);

        reverse(ans.begin(), ans.end());
        return ans;
    }
};