// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

// Example 1:

// Input: s = "()"

// Output: true

// Example 2:

// Input: s = "()[]{}"

// Output: true

// Example 3:

// Input: s = "(]"

// Output: false

// Example 4:

// Input: s = "([])"

// Output: true

// Constraints:

// 1 <= s.length <= 104
// s consists of parentheses only '()[]{}'.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        vector<int> arr;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                arr.push_back(s[i]);
            }
            else if ((s[i] == ')' || s[i] == '}' || s[i] == ']') && arr.size() != 0)
            {
                char end = arr[arr.size() - 1];
                if (end == '(' && s[i] == ')')
                {
                    arr.pop_back();
                    continue;
                }
                else if (end == '[' && s[i] == ']')
                {
                    arr.pop_back();
                    continue;
                }
                else if (end == '{' && s[i] == '}')
                {
                    arr.pop_back();
                    continue;
                }
                else
                    return 0;
            }
            else
                return 0;
        }
        if (arr.size() == 0)
            return 1;
        return 0;
    }
};