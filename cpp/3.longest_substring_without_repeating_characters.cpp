#include <string>
class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        if (s.length() == 0) return 0;
        if (s.length() == 1) return 1;
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            std::string ss = "";
            int temp = 0;
            for (int j = i; j < s.length(); j++) {
                if (ss.find(s[j]) != std::string::npos) break;
                else {
                    ss += s[j];
                    temp++;
                    if (temp > ans) ans = temp;
                }
            }
        }
        return ans;
    }
};
