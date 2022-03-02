#include <map>
#include <string>
class Solution {
public:
    int romanToInt(std::string s) {
        std::map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            ans += roman[s[i]];
            if (i > 0) {
                if (s[i - 1] == 'I' && (s[i] == 'V' || s[i] == 'X')) ans -= 2;
                if (s[i - 1] == 'X' && (s[i] == 'L' || s[i] == 'C')) ans -= 20;
                if (s[i - 1] == 'C' && (s[i] == 'D' || s[i] == 'M')) ans -= 200;
            }
        }
        return ans;
    }
};
