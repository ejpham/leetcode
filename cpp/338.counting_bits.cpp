#include <vector>
class Solution {
public:
    std::vector<int> countBits(int n) {
        // O(nlogn) time solution
        std::vector<int> ans(n + 1, 0);
        for (int i = 1; i < ans.size(); i++) {
            for (int j = i; j > 0; j /= 2) if (j % 2 == 1) ans[i]++;
        }
        return ans;
    }
};
