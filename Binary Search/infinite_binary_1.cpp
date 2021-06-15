// find position of first 1 in infinite sized binary array
// Idea: to find the upper bound by increasing the high till the target becomes <= arr[high]
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    int arr[n] = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1};
    int low = 0, high = 1; // high is one because if its infinite, we don't know the upper bound
    // finding the upper bound
    // 1 because that's the target

    while (high < n - 1 && arr[high] < 1)
        high = high * 2; // keep doubling the high

    // normal binary search to find first position of target element
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == 1)
        {
            ans = mid;      // save this
            high = mid - 1; // go find better
        }
        else if (arr[mid] == 0)
            low = mid + 1;
    }

    cout << ans << endl;
}