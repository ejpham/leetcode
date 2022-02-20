#include <vector>
#include <algorithm>
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int cnt=0,temp;
        for (int i=0; i<nums.size(); i++) {
            if (i==0){
                temp=nums[i];
                cnt++;
            }
            else if(nums[i]==temp) nums[i]=101;
            else{
                temp=nums[i];
                cnt++;
            }
        }
        std::sort(nums.begin(),nums.end());
        return cnt;
    }
};