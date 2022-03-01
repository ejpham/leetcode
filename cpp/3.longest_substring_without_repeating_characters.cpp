#include <string>
class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
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
