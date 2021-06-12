#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/search-in-rotated-sorted-array/
int search(vector<int> &nums, int target)
{

    int low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
            return mid;

        // normal binary search
        if (nums[mid] >= nums[low])
        {
            if (nums[mid] >= target && nums[low] <= target)
                high = mid - 1;
            else
                low = mid + 1;
        }

        // mid is right half
        // if middle element is less than the target but the rightmost element is
        // greater than the target, go normal binary search
        else
        {
            if (nums[mid] < target and nums[high] >= target)
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1;
}