#include <vector>
#include <climits>
class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        // low: lowest prices to buy at
        // high : highest profit so far
        // profit: profit if sold today
        int low = INT_MAX, high = 0, profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            // if found lower buy price
            if (prices[i] < low) low = prices[i];
            // calculate profit if sold today with lowest price so far
            profit = prices[i] - low;
            // if profit if sold today is higher than highest profit so far
            if (profit > high) high = profit;
        }
        return high;
    }
};