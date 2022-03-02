#include <climits>
#include <string>
class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string ans = "";
        int i = 0, j = 0;
        while (i < word1.length() && j < word2.length()) {
            if (i == j) ans += word1[i++];
            else if (i > j) ans += word2[j++];
        }
        while (i < word1.length()) ans += word1[i++];
        while (j < word2.length()) ans += word2[j++];
        return ans;
    }
};
