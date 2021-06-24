#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        // Kadane's Algorithm Approach
        // for(int i=1; i<prices.size(); i++) {
        //     profit += max(prices[i] - prices[i-1], 0); // if not negative then add
        // }
        // return profit;

        // Peak - Valley Approach
        for (int i = 1; i < prices.size(); i++)
            if (prices[i] > prices[i - 1])
                profit += prices[i] - prices[i - 1];

        return profit;
    }
};