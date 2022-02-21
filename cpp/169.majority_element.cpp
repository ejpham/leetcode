#include <unordered_map>
#include <vector>
class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        std::unordered_map<int, int> ump;
        for (int i = 0; i < nums.size(); i++) {
            ump[nums[i]]++;
        }
        
        int ans = 0, cnt = 0;
        for (auto it : ump) {
            if (it.second > cnt) {
                ans = it.first;
                cnt = it.second;
            }
        }
        return ans;
    }
};
