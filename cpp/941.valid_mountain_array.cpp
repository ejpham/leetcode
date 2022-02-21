#include <vector>
#include <algorithm>
#include <climits>
class Solution {
public:
    bool validMountainArray(std::vector<int>& arr) {
        if (arr.size() < 3) return false;

        int l = 0, r = arr.size() - 1;

        while (l + 1 < arr.size() - 1 && arr[l] < arr[l + 1]) l++;
        while (r - 1 > 0 && arr[r] < arr[r - 1]) r--;

        return l == r;
    }
};