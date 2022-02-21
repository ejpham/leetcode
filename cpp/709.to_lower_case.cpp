#include <string>
class Solution {
public:
    std::string toLowerCase(std::string s) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
        return s;
    }
};