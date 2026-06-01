// Best time to Sell and Stock
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int mini = prices[0];
    int maxProfit = 0;

    for(int i = 1; i < prices.size(); i++)
    {
        int profit = prices[i] - mini;

        maxProfit = max(maxProfit, profit);

        mini = min(mini, prices[i]);
    }

    return maxProfit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int result = maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}