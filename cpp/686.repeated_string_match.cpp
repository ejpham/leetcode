#include <string>
class Solution {
public:
    int repeatedStringMatch(std::string a, std::string b) {
        if (a.find(b) != -1) return 1;
        if (b.find(a) == -1) return -1;
        int cnt = 1;
        while (a.find(b) == -1) cnt++, a += a;
        return cnt;
    }
};
