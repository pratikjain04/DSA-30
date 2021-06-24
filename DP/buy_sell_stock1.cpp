// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        // track lowest point - My method
        // int low = prices[0];
        // for(int i = 0; i < prices.size(); i++) {
        //         if(prices[i] > low)
        //             profit = max(prices[i] - low, profit);
        //         else
        //             low = prices[i];
        // }

        // Same method, Better code
        int min_value = INT_MAX, profit = 0;
        for (int price : prices)
        {
            min_value = min(min_value, price);
            profit = max(price - min_value, profit);
        }

        return profit;
    }
};