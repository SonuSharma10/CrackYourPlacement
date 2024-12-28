// You are given an array a
//  of n
//  integers, where all elements except for at most one are equal to −1
//  or 1
// . The remaining element x
//  satisfies −109≤x≤109
// .

// Find all possible sums of subarrays of a
// , including the empty subarray, whose sum is defined as 0
// . In other words, find all integers x
//  such that the array a
//  has at least one subarray (possibly empty) with sum equal to x
// . A subarray is a contiguous subsegment of an array.

// Output these sums in ascending order. Each sum should be printed only once, even if it is achieved by multiple subarrays.

// Input
// The first line contains a single integer t
//  (1≤t≤104
// ) — the number of test cases. Then, t
//  test cases follow.

// Each test case consists of two lines:

// The first line contains a single integer n
//  (1≤n≤2⋅105
// ) — the size of the array.
// The second line contains n
//  integers a1,a2,…,an
//  (−109≤ai≤109
// ) — the elements of the array a
// . In the array a
// , there is at most one element that is neither 1
//  nor −1
// .
// Additional constraint on the input: the sum of n
//  over all test cases does not exceed 2⋅105
// .

// Output
// For each test case, output two lines:

// In the first line, print a single integer — the number of distinct subarray sums.
// In the second line, print these sums in ascending order.
// Each sum should be printed only once, even if it is produced by multiple subarrays.

// Example
// InputCopy
// 5
// 5
// 1 -1 10 1 1
// 5
// -1 -1 -1 -1 -1
// 2
// -1 2
// 2
// 7 1
// 3
// 1 4 -1
// OutputCopy
// 8
// -1 0 1 2 9 10 11 12
// 6
// -5 -4 -3 -2 -1 0
// 4
// -1 0 1 2
// 4
// 0 1 7 8
// 6
// -1 0 1 3 4 5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int inp;
    cin >> inp;

    while (inp--)
    {
        int num;
        cin >> num;
        vector<int> arr(num);
        vector<int> arr2;
        unordered_set<int> set;
        set.insert(0);
        arr2.push_back(0);
        for (int i = 0; i < num; i++)
        {
            int a;
            cin >> a;
            arr[i] = a;
        }

        for (int i = 0; i < num; i++)
        {
            int sum = 0;
            for (int j = i; j < num; j++)
            {
                sum += arr[j];
                if (set.find(sum) == set.end())
                {
                    set.insert(sum);
                    arr2.push_back(sum);
                }
            }
        }
        cout << arr2.size() << endl;
        sort(arr2.begin(), arr2.end());
        for (auto i : arr2)
        {
            cout << i << " ";
        }
    }

    return 0;
}