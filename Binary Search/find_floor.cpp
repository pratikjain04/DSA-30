#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    int x;
    cin >> x;
    // find just smaller than x
    int low = 0, high = n - 1;
    if (x >= v[high])
        cout << v[high] << endl;
    else if (x < v[low])
        cout << "-1" << endl;
    else
    {
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (v[mid] == x)
            {
                cout << mid << endl;
                break;
            }
            else if (v[mid] > x)
            {
                if (mid - 1 >= low && v[mid - 1] <= x)
                {
                    cout << mid - 1 << endl;
                    break;
                }
                else
                    high = mid - 1;
            }
            else if (v[mid] < x)
            {
                if (mid + 1 <= high && v[mid + 1] > x)
                {
                    cout << mid << endl;
                    break;
                }
                else
                    low = mid + 1;
            }
        }
    }
}