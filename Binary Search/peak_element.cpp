// https://leetcode.com/problems/find-peak-element/
#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    int n = nums.size();
    int low = 0, high = n - 1;

    // corner cases
    if (n == 1)
        return 0;
    if (nums[low] > nums[low + 1])
        return low;
    if (nums[high] > nums[high - 1])
        return high;
    // binary search
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
            return mid;
        else if (nums[mid + 1] > nums[mid])
            low = mid; // to avoid overflow
        else
            high = mid; // to avoid overflow
    }

    return 0;
}