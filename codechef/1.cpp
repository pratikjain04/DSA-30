#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> roots;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        roots.push_back(num);
    }

    sort(roots.begin(), roots.end());

    while (q--)
    {
        int num;
        cin >> num;

        auto lower = lower_bound(roots.begin(), roots.end(), num);
        if (*lower == num)
            cout << "0" << endl;
        else if ((lower - roots.begin()) % 2 == 0)
            cout << "POSITIVE" << endl;
        else
            cout << "NEGATIVE" << endl;
    }
}