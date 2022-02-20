#include <vector>
class Solution {
public:
    int removeCoveredIntervals(std::vector<std::vector<int>>& intervals) {
        std::vector<int> rem;
        for(int i=0;i<intervals.size();i++){
            for(int j=0;j<intervals.size();j++){
                if(i!=j){
                    if(intervals[i][0]<=intervals[j][0] && intervals[i][1]>=intervals[j][1]){
                        intervals.erase(intervals.begin()+j);
                    }
                    else if(intervals[j][0]<=intervals[i][0] && intervals[j][1]>=intervals[i][1]){
                        intervals.erase(intervals.begin()+i);
                    }
                }
            }
        }
        return intervals.size();
    }
};