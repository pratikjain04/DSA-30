#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> even;
        vector<int> odd;

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;

            if (num % 2 == 0)
                even.push_back(num);
            else
                odd.push_back(num);
        }

        for (int x : even)
            cout << x << " ";
        for (int x : odd)
            cout << x << " ";
        cout << endl;
    }
}