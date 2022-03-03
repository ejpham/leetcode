#include <unordered_map>
#include <vector>
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_map<int, int> um;
        for (int i = 0; i < nums.size(); i++) {
            um[nums[i]]++;
            if (um[nums[i]] == 2) return true;
        }
        return false;
    }
};
