#include <string>
class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int cnt = 0, i = s.length() - 1;
        while (s[i] == ' ') i--;
        while (i >= 0 && s[i] != ' ') {
            cnt++;
            i--;
        }
        return cnt;
    }
};
