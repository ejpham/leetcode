#include <string>
#include <vector>
#include <algorithm>
class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.size() == 1)
            return strs[0];

        std::sort(strs.begin(), strs.end());
        std::string ret = "", first = strs.front(), last = strs.back();
        for (int i = 0; i < first.length(); i++) {
            if (first[i] == last[i])
                ret += first[i];
            else break;
        }
        return ret;
    }
};