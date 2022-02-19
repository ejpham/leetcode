#include <vector>
class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            for (int j = i + 1; j < prices.size(); j++) {
                if (prices[j] - prices[i] > profit) profit = prices[j] - prices[i];
            }
        }
        return profit;
    }
};