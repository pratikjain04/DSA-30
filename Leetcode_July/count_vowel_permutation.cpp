#include <bits/stdc++.h>
using namespace std;

int countV = 0;
void countUtil(int n, char state, string output)
{
    output.push_back(state);
    if (output.length() == n)
    {
        cout << output << endl;
        countV++;
        output.pop_back();
        return;
    }

    if (state == 'a')
        countUtil(n, 'e', output);
    else if (state == 'e')
    {
        countUtil(n, 'i', output);
        countUtil(n, 'a', output);
    }
    else if (state == 'u')
        countUtil(n, 'a', output);
    else if (state == 'o')
    {
        countUtil(n, 'i', output);
        countUtil(n, 'u', output);
    }
    else if (state == 'i')
    {
        countUtil(n, 'a', output);
        countUtil(n, 'e', output);
        countUtil(n, 'o', output);
        countUtil(n, 'u', output);
    }
}

int countVowelPermutation(int n)
{
    // recursion
    // state machine
    vector<char> states = {'a', 'e', 'i', 'o', 'u'};
    for (char c : states)
        countUtil(n, c, "");
    return countV;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << countVowelPermutation(n) << endl;
    }
}