#include <vector>
class Solution {
public:
    int first(std::vector<int>& nums,int left,int right,int target){
        while(left<=right){
            int mid=left+(right-left)/2;
            if(target>nums[mid]) left=mid+1;
            else if(target<nums[mid]) right=mid-1;
            else{
                if(mid==left || nums[mid]!=nums[mid-1]){
                    return mid;
                }
                else right=mid-1;
            }
        }
        return -1;
    }
    int last(std::vector<int>& nums,int left,int right,int target){
        while(left<=right){
            int mid=left+(right-left)/2;
            if(target>nums[mid]) left=mid+1;
            else if(target<nums[mid]) right=mid-1;
            else{
                if(mid==right || nums[mid]!=nums[mid+1]){
                    return mid;
                }
                else left=mid+1;
            }
        }
        return -1;
    }
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        return {first(nums,0,nums.size()-1,target),last(nums,0,nums.size()-1,target)};
    }
};