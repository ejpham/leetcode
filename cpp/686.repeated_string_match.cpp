#include <string>
class Solution {
public:
    int repeatedStringMatch(std::string a, std::string b) {
        string temp = a;
        for (int i = 1; i <= b.length() / a.length() + 2; i++, temp += a) {
            if (temp.find(b) != std::string::npos) return i;
        }
        return -1;
    }
};
