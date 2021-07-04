#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    stringstream ss(s);
    string str;
    vector<int> nums;
    while (getline(ss, str, ','))
        nums.push_back(stoi(str));

    int i = 0;
    for (int reach = 0; i < n && i <= reach; ++i)
        reach = max(i + nums[i], reach);
    cout << (i == n) << endl;
}