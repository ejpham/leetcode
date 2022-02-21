#include <algorithm>
#include <unordered_map>
#include <vector>
class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        // O(nlogn) time, O(1) space
        std::sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
        
        /* O(n) time, O(1) space
        int ans = nums[0], cnt = 1;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == ans) cnt++;
            else cnt--;
            if (cnt == 0) {
                ans = nums[i];
                cnt = 1;
            }
        }
        
        return ans;
        */
        
        /* O(n) time, O(n) space
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
        */
    }
};
