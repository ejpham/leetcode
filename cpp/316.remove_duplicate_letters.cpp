#include <algorithm>
#include <string>
class Solution {
public:
    std::string removeDuplicateLetters(std::string s) {
        std::string ans = "";
        for (int i = 0; i < s.length(); i++) {
            if (std::find(ans.begin(), ans.end(), s[i]) == ans.end()) ans += s[i];
            else {
                std::string temp = "";
                for (int j = 0; j < ans.length(); j++) {
                    if (ans[j] != s[i]) temp += ans[j];
                }
                temp = ans + s[i];
            }
        }
        return ans;
    }
};
