// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
// You may return the answer in any order.

// Example 1:

// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
// Example 2:

// Input: nums = [2,2,2,2,2], target = 8
// Output: [[2,2,2,2]]

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long sum;

        vector<vector<int>> ans(0, vector<int>(4));
        unordered_set<string> set;

        for (int a = 0; a < n - 3; a++)
        {
            if (a > 0 && nums[a] == nums[a - 1])
                continue;
            for (int b = a + 1; b < n - 2; b++)
            {
                int left = b + 1, right = n - 1;
                while (left < right)
                {
                    sum = (long long)nums[a] + (long long)nums[b] +
                          (long long)nums[left] + (long long)nums[right];

                    if (sum > target)
                    {
                        right--;
                    }
                    else if (sum < target)
                    {
                        left++;
                    }
                    else
                    {
                        string str = to_string(nums[a]) + ',' +
                                     to_string(nums[b]) + ',' +
                                     to_string(nums[left]) + ',' +
                                     to_string(nums[right]);
                        if (set.find(str) == set.end())
                        {
                            ans.push_back(
                                {nums[a], nums[b], nums[left], nums[right]});
                            set.insert(str);
                        }

                        left++;
                    }
                }
            }
        }
        return ans;
    }
};