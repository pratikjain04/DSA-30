#include <bits/stdc++.h>
using namespace std;

vector<int> awesomeSort(vector<int> arr)
{
    vector<int> divBy5, notDivby5, even, odd;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
            even.push_back(arr[i]);
        else
            odd.push_back(arr[i]);
    }

    for (int x : even)
    {
        if (x % 5 == 0)
            divBy5.push_back(x);
        else
            notDivby5.push_back(x);
    }

    vector<int> ans;
    sort(divBy5.begin(), divBy5.end(), greater<int>()); // larger will come first
    reverse(notDivby5.begin(), notDivby5.end());        // greater index value will come first
    for (int i = 0; i < divBy5.size(); i++)
        ans.push_back(divBy5[i]);
    for (int i = 0; i < notDivby5.size(); i++)
        ans.push_back(notDivby5[i]);
    for (int i = 0; i < odd.size(); i++)
        ans.push_back(odd[i]);

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    vector<int> ans = awesomeSort(arr);
    for (int x : ans)
        cout << x << " ";
    cout << endl;
}