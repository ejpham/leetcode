#include <unordered_map>
#include <vector>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::unordered_map<int, int> map;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (map.find(target - nums[i]) != map.end())
                return {i, map[target - nums[i]]};
            
            map[nums[i]] = i;
        }
        
        return {-1, -1};
    }
};
