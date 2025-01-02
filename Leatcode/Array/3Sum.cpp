// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

// Example 1:

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation:
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.
// Example 2:

// Input: nums = [0,1,1]
// Output: []
// Explanation: The only possible triplet does not sum up to 0.
// Example 3:

// Input: nums = [0,0,0]
// Output: [[0,0,0]]
// Explanation: The only possible triplet sums up to 0.

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size(), left, right;
        vector<vector<int>> result(0, vector<int>(3));
        unordered_set<string> sets;

        for (int i = 0; i < n - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            left = i + 1;
            right = n - 1;
            while (left < right)
            {
                if (nums[i] + nums[left] + nums[right] < 0)
                    left++;
                else if (nums[i] + nums[left] + nums[right] > 0)
                    right--;
                else
                {
                    string sstr = to_string(nums[i]) + "," +
                                  to_string(nums[left]) + "," +
                                  to_string(nums[right]);

                    // If this triplet is unique, add it to the result
                    if (sets.find(sstr) == sets.end())
                    {
                        result.push_back({nums[i], nums[left], nums[right]});
                        sets.insert(sstr);
                    }
                    left++;
                    right--;
                }
            }
        }
        return result;
    }
};

// [-4,-3,-2,-1,-1,0,0,1,2,3,4]