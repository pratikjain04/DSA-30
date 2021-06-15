#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int minVal = INT_MAX;
    // int maxVal = INT_MIN;
    int xorVal = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        xorVal ^= arr[i];
        minVal = min(minVal, arr[i]);
        // maxVal = max(maxVal, arr[i]);
    }

    if (xorVal == 0 && n % 2 == 0)
        cout << "-1";
    else if (n % 2 == 0)
        cout << "1" << endl;
    else if (xorVal <= minVal)
        cout << "1";
    else if (xorVal > minVal)
        cout << "0";
    cout << endl;
}