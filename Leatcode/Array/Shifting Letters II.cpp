// You are given a string s of lowercase English letters and a 2D integer array shifts where shifts[i] = [starti, endi, directioni]. For every i, shift the characters in s from the index starti to the index endi (inclusive) forward if directioni = 1, or shift the characters backward if directioni = 0.

// Shifting a character forward means replacing it with the next letter in the alphabet (wrapping around so that 'z' becomes 'a'). Similarly, shifting a character backward means replacing it with the previous letter in the alphabet (wrapping around so that 'a' becomes 'z').

// Return the final string after all such shifts to s are applied.

// Example 1:

// Input: s = "abc", shifts = [[0,1,0],[1,2,1],[0,2,1]]
// Output: "ace"
// Explanation: Firstly, shift the characters from index 0 to index 1 backward. Now s = "zac".
// Secondly, shift the characters from index 1 to index 2 forward. Now s = "zbd".
// Finally, shift the characters from index 0 to index 2 forward. Now s = "ace".
// Example 2:

// Input: s = "dztz", shifts = [[0,0,0],[1,1,1]]
// Output: "catz"
// Explanation: Firstly, shift the characters from index 0 to index 0 backward. Now s = "cztz".
// Finally, shift the characters from index 1 to index 1 forward. Now s = "catz".

// Constraints:

// 1 <= s.length, shifts.length <= 5 * 104
// shifts[i].length == 3
// 0 <= starti <= endi < s.length
// 0 <= directioni <= 1
// s consists of lowercase English letters.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string shiftingLetters(string s, vector<vector<int>> &shifts)
    {
        // int loop = shifts.size();
        // for(int i=0; i<loop; i++){
        //     for(int j = shifts[i][0]; j<=shifts[i][1]; j++){
        //         if(shifts[i][2]) s[j] = char((++s[j] -'a')% 26 + 97);
        //         else {
        //             if((--s[j] -'a')==-1) s[j] = 'z';
        //             else s[j] = char((--s[j] -'a') + 98);
        //         }
        //         // cout<< s <<" ";
        //     }
        // }

        // str[4] = char((++str[4] -'a')% 26 + 97);

        // tracking and moving forward

        int len = s.length();
        vector<int> arr(len + 1, 0);
        int loop = shifts.size();
        for (int i = 0; i < loop; i++)
        {
            if (shifts[i][2])
            {
                arr[shifts[i][0]]++;
                arr[shifts[i][1] + 1]--;
            }
            else
            {
                arr[shifts[i][0]]--;
                arr[shifts[i][1] + 1]++;
            }
        }
        int prefixSum = 0;
        for (int i = 0; i < len; i++)
        {
            prefixSum += arr[i];
            // cout<<prefixSum<<',';
            s[i] = 'a' + (((s[i] - 'a' + prefixSum) % 26 + 26) % 26);
        }

        // for(int i=0; i<len; i++){
        //     if(arr[i]==0) continue;
        //     else if(arr[i]>0){
        //         s[i] = 'a'+(((s[i]-'a') + arr[i])%26);
        //     }
        //     else{
        //         s[i] = 'a'+((((s[i]-'a') + arr[i]) +26) %26);
        //     }
        // }

        return s;
    }
};