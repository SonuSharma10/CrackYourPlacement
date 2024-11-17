// Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

// For example:

// A -> 1
// B -> 2
// C -> 3
// ...
// Z -> 26
// AA -> 27
// AB -> 28 
// ...
 

// Example 1:

// Input: columnNumber = 1
// Output: "A"
// Example 2:

// Input: columnNumber = 28
// Output: "AB"
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
    vector<char> chars;

    while(columnNumber > 0){
        int newChars = (columnNumber-1)%26+65;
        columnNumber = (columnNumber-1)/26;
        chars.push_back(newChars);
    }
    string output = "";
    reverse(chars.begin(), chars.end());
    for (char c : chars){
        output = output + c;
    }
    cout << output;
    return output; 

    }
};