// Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

// Return the sum of the three integers.

// You may assume that each input would have exactly one solution.

// Example 1:

// Input: nums = [-1,2,1,-4], target = 1
// Output: 2
// Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
// Example 2:

// Input: nums = [0,0,0], target = 1
// Output: 0
// Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());

        int n = nums.size(), sum;
        int closestSum = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < n - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int left = i + 1, right = n - 1;
            while (left < right)
            {
                sum = nums[i] + nums[left] + nums[right];

                if (abs(sum - target) < abs(closestSum - target))
                {
                    closestSum = sum;
                }
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
                    return sum;
                }
            }
        }
        return closestSum;
    }
};

// [-109, -33, -33, -33, -33, -22, -7, -5, 0, 0, 22, 43, 43, 43, 326, 999]