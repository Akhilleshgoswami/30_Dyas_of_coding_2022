

/**
 * @file aRRAY_pair_sum_divisibility.cpp
 * @author your name Akhilesh goswami
 * @brief Day 5  - 2nd question from the 6 company sheet @Revise with Arsh #ArshGoyal 
 * @version 0.1
 * @date 2022-02-01
 * problme link - https://leetcode.com/problems/minimum-size-subarray-sum/
 * 
 * problem statement - 
 * Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. 
 * By convention, 1 is included. Write a program to find Nth Ugly Number.
 *  solution -https://leetcode.com/submissions/detail/613442268/
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int> &nums)
{
    int l = 0, r = 0, n = nums.size(), sum = 0, len = INT_MAX;
    while (r < n)
    {
        sum += nums[r++];
        while (sum >= target)
        {
            len = min(len, r - l);
            sum -= nums[l++];
        }
    }
    return len == INT_MAX ? 0 : len;
}

int main()
{
    return 0;
}