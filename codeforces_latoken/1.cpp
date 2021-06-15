#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        char grid[m][n];
        char ans1[m][n], ans2[m][n];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> grid[i][j];

        bool flag = true;
        // build ans1 & ans2
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (flag)
                {
                    ans1[i][j] = j % 2 == 0 ? 'R' : 'W';
                    ans2[i][j] = j % 2 == 0 ? 'W' : 'R';
                }
                else
                {
                    ans1[i][j] = j % 2 == 0 ? 'W' : 'R';
                    ans2[i][j] = j % 2 == 0 ? 'R' : 'W';
                }
            }
            flag = !flag;
        }

        bool answer1 = true, answer2 = true;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] != '.' && ans1[i][j] != grid[i][j])
                {
                    answer1 = false;
                    break;
                }
            }
            if (!answer1)
                break;
        }

        if (!answer1)
        {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (grid[i][j] != '.' && ans2[i][j] != grid[i][j])
                    {
                        answer2 = false;
                        break;
                    }
                }
                if (!answer2)
                    break;
            }
        }

        if (answer1 || answer2)
        {
            cout << "Yes" << endl;
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (answer1)
                        cout << ans1[i][j];
                    else
                        cout << ans2[i][j];
                }
                cout << endl;
            }
        }
        else
            cout << "No" << endl;
    }
}