#include <string>
#include <vector>
class Solution {
public:
    int titleToNumber(std::string columnTitle) {
        // three liner solution - same time and space
        int ans = 0;
        for (char c : columnTitle) ans = (ans * 26) + (c - 64);
        return ans;
        /* first solution - O(n) time, O(1) space
        int ans = 0, multi = 1;
        for (int i = columnTitle.length() - 1; i >= 0; i--) {
            ans += (columnTitle[i] - 64) * multi;
            if (i > 0) multi *= 26;
        }
        return ans;
        */
    }
};
