#include <string>
class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int j = 0;
        // if all characters in s using j as traverser are found in t using i as traverser, then j should equal to length of s
        for (int i = 0; i < t.length() && j < s.length(); i++) if (s[j] == t[i]) j++;
        return (j == s.length());
    }
};
