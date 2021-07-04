#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string A;
        cin >> A;
        string ans;
        if (A[0] == '1')
        {
            ans.push_back(A[0]);
            ans.push_back('0');
            ans = ans + A.substr(1, A.size());
        }
        else
            ans = "1" + A;

        cout << ans << endl;
    }
}
