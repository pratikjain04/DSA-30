#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

bool search(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1;

    if (r == 0 && nums[r] == target)
        return true;
    else if (r == 0)
        return false;

    // skip initial duplcates from both ends
    while (l < r && nums[r] == nums[r - 1])
        r--;
    while (l < r && nums[l] == nums[l + 1])
        l++;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
            return true;

        if (nums[mid] >= nums[l])
        {
            // first sorted array then normal binary search
            if (nums[mid] >= target && nums[l] <= target)
                // target is in first half
                r = mid - 1;
            else
                l = mid + 1;
        }
        else
        {
            // second sorted array
            // if the target is more than mid but less than right then its in second half
            if (nums[mid] < target && nums[r] >= target)
                l = mid + 1;
            else
                r = mid - 1;
        }
    }

    return false;
}