// You are given a 0-indexed string pattern of length n consisting of the characters 'I' meaning increasing and 'D' meaning decreasing.

// A 0-indexed string num of length n + 1 is created using the following conditions:

// num consists of the digits '1' to '9', where each digit is used at most once.
// If pattern[i] == 'I', then num[i] < num[i + 1].
// If pattern[i] == 'D', then num[i] > num[i + 1].
// Return the lexicographically smallest possible string num that meets the conditions.

// Example 1:

// Input: pattern = "IIIDIDDD"
// Output: "123549876"
// Explanation:
// At indices 0, 1, 2, and 4 we must have that num[i] < num[i+1].
// At indices 3, 5, 6, and 7 we must have that num[i] > num[i+1].
// Some possible values of num are "245639871", "135749862", and "123849765".
// It can be proven that "123549876" is the smallest possible num that meets the conditions.
// Note that "123414321" is not possible because the digit '1' is used more than once.
// Example 2:

// Input: pattern = "DDD"
// Output: "4321"
// Explanation:
// Some possible values of num are "9876", "7321", and "8742".
// It can be proven that "4321" is the smallest possible num that meets the conditions.

// Constraints:

// 1 <= pattern.length <= 8
// pattern consists of only the letters 'I' and 'D'.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string smallestNumber(string pattern)
    {
        stack<char> chars;
        string s = "";
        for (int i = pattern.length() - 1; i >= 0; i--)
        {
            chars.push(pattern[i]);
        }
        if (pattern[0] == 'I')
            s = "1";
        int counter = 1, decrement = 1;
        // cout<<"counter: " <<counter<<" decrement: "<<decrement<<" s: "<<s<<endl;
        while (!chars.empty())
        {
            char front = chars.top();
            if (front == 'I')
            {
                counter++;
                // cout<<"counter: " <<counter<<" decrement: "<<decrement<<" s: "<<s<<endl;
                chars.pop();
                if (!chars.empty())
                {
                    front = chars.top();
                    if (front == 'I')
                    {
                        s += to_string(counter);
                        // cout<<"counter in I: " <<counter<<" decrement: "<<decrement<<" s: "<<s<<endl;
                    }
                    else
                    {
                        decrement = counter;
                        while (!chars.empty() && chars.top() == 'D')
                        {
                            counter++;
                            chars.pop();
                            // cout<<"counter: " <<counter<<" decrement: "<<decrement<<" s: "<<s<<endl;
                        }
                        for (int i = counter; i >= decrement; i--)
                        {
                            s += to_string(i);
                            // cout<<"counter: " <<counter<<" decrement: "<<decrement<<" s: "<<s<<endl;
                        }
                    }
                }
                else
                {
                    s += to_string(counter);
                }
            }
            else
            {
                decrement = counter;
                while (!chars.empty() && chars.top() == 'D')
                {
                    counter++;
                    chars.pop();
                    // cout<<" counter: " <<counter<<" decrement: "<<decrement<<" s: "<<s<<endl;
                }
                for (int i = counter; i >= decrement; i--)
                {
                    s += to_string(i);
                    // cout<<" counter: " <<counter<<" decrement: "<<decrement<<" s: "<<s<<endl;
                }
            }
        }
        return s;
    }
};