#include <vector>
#include <numeric> // std::accumulate
class Solution {
public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        // O(m*n) time complexity - brute force using accumulate
        int richest = 0;
        for (int i = 0; i < accounts.size(); i++) {
            int sum = 0;
            sum = std::accumulate(accounts[i].begin(), accounts[i].end(), sum);
            if (sum > richest) richest = sum;
        }
        return richest;

        /* O(m*n) time complexity - brute force solution
        int richest = 0;
        for (int i = 0; i < accounts.size(); i++) {
            int sum = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                sum += accounts[i][j];
            }
            if (sum > richest) richest = sum;
        }
        return richest;
        */
    }
};