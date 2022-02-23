#include <string>
#include <algorithm>
class Solution {
public:
    std::string convertToTitle(int columnNumber) {
        std::string ans = "";
        while (columnNumber--) {
            ans = (char)(65 + (columnNumber % 26)) + ans;
            columnNumber /= 26;
        }
        return ans;
    }
};
