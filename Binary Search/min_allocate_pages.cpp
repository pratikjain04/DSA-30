// very interesting problem
// https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1#

#include <bits/stdc++.h>
using namespace std;

bool isAllocationPossible(int barrier, int arr[], int n, int m)
{
    int pages = 0, allocatedStud = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > barrier)
            return false;
        if (arr[i] + pages > barrier)
        {
            allocatedStud++; // increase student needed
            pages = arr[i];  // add pages for new student
        }
        else
            pages += arr[i]; // add pages to same student
    }

    // if we have number of allocated students less than and equal to m
    // then the allocation is possible
    if (allocatedStud > m)
        return false;
    return true;
}

int findPages(int arr[], int n, int m)
{
    //code here
    int low = *max_element(arr, arr + n), sum = 0, ans = -1;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    int high = sum;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isAllocationPossible(mid, arr, n, m))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    return ans;
}