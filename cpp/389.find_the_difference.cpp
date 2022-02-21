#include <string>
class Solution {
public:
    char findTheDifference(std::string s, std::string t) {
        int sums = 0, sumt = 0;
        for (char x : s)
            sums += x;
        for (char k : t)
            sumt += k;
        return (char)(sumt - sums);
    }
};