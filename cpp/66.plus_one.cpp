#include <string>
#include <vector>
class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        if (digits[digits.size() - 1] != 9) {
            digits[digits.size() - 1]++;
            return digits;
        }
        std::vector<int> ans;
        int i = digits.size() - 1;
        while (digits[i] == 9) ans.push_back(0), i--;
        if (i < 0) ans.push_back(1);
        else digits[i]++;
        std::reverse(ans.begin(), ans.end());
        return ans;
    }
};
