#include <string>
class Solution {
public:
    bool repeatedSubstringPattern(std::string s) {
        return (s+s).substr(1,(s+s).length()-2).find(s)!=-1;
    }
};