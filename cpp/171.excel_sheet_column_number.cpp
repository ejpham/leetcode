#include <string>
#include <vector>
class Solution {
public:
    int titleToNumber(std::string columnTitle) {
        int ans = 0;
        int multi = 1;
        for (int i = columnTitle.length() - 1; i >= 0; i--) {
            ans += (columnTitle[i] - 64) * multi;
            if (i > 0) multi *= 26;
        }
        return ans;
    }
};
