#include <string>
#include <vector>
class Solution {
public:
    std::vector<int> countBits(int n) {
        std::vector<int> ans;
        for (int i = 0; i <= n; i++) {
            
        }
        return ans;
        /*
        std::vector<int> ans(n + 1, 0);
        for (int i = 0; i < ans.size(); i++) {
            for (int j = i; j > 0; j /= 2) if (j % 2 == 1) ans[i]++;
        }
        return ans;
        */
    }
};
