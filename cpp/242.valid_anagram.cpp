#include <unordered_map>
#include <string>
class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) return false;
        std::unordered_map<char, int> sm;
        std::unordered_map<char, int> tm;
        for (int i = 0; i < s.length(); i++) sm[s[i]]++;
        for (int i = 0; i < t.length(); i++) tm[t[i]]++;
        return (sm == tm);
    }
};
