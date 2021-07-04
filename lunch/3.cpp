#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    unordered_map<long long int, bool> m;
    for (long long int i = 2; i <= 1e18; i = i * 2)
        m[i] = true;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        if (m[b])
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}