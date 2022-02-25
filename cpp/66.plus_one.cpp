#include <string>
#include <vector>
class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int i = digits.size() - 1;
        if (digits[i] != 9) {
            digits[i]++;
            return digits;
        }
        std::vector<int> ans;
        while (i >= 0 && digits[i] == 9) ans.push_back(0), i--;
        if (i < 0) ans.push_back(1);
        else digits[i]++;
        while (i >= 0) ans.push_back(digits[i--]);
        std::reverse(ans.begin(), ans.end());
        return ans;
    }
};
