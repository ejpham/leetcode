#include <string>
#include <vector>
class Solution {
public:
    std::vector<int> countBits(int n) {
        std::vector<int> ans;
        for (int i = 0; i <= n; i++) {
            ans.push_back(0);
            int j = i;
            while (j > 0) {
                if (j % 2 == 1) ans[i]++;
                j /= 2;
            }
        }
        return ans;
    }
};
