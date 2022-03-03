#include <vector>
class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        std::vector<int> ans;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) cnt++;
            else ans.push_back(nums[i]);
        }
        while (cnt--) ans.push_back(0);
        nums = ans;
    }
};
