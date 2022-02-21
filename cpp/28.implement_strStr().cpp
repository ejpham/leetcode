#include <string>
#include <algorithm>
class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if (needle=="") return 0;
        int i=haystack.find(needle);
        if (i >= 0) return i;
        return -1;
    }
};