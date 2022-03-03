#include <unordered_map>
#include <string>
class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) return false;
        std::unordered_map<char, int> um;
        for (int i = 0; i < s.length(); i++) um[s[i]]++, um[t[i]]--;
        for (auto x : um) if (x.second > 0) return false;
        return true;
    }
};
