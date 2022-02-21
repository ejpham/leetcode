#include <vector>
class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(target==nums[mid]) return mid;
            else if(target<nums[mid]) right=mid-1;
            else left=mid+1;
        }
        return left;
        /*
        my first successful attempt
        int left=0,right=nums.size()-1,ans;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(target==nums[mid]){
                ans=mid;
                break;
            }
            else if(left==right && nums[mid]!=target){
                if(target>nums[mid]){
                    ans=mid+1;
                    break;
                }
                else{
                    ans=mid;
                    break;
                }
            }
            else if(target>nums[mid]) left=mid+1;
            else if(target<nums[mid]) right=mid-1;
        }
        return ans;
        */
    }
};