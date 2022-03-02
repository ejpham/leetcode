#include <string>
class Solution {
public:
    std::string intToRoman(int num) {
        std::string ans = "";
        while (num > 0) {
            if (num  >= 1000) {
                ans += 'M';
                num -= 1000;
            }
            else if (num >= 500) {
                ans += 'D';
                num -= 500;
            }
            else if (num >= 100) {
                ans += 'C';
                num -= 100;
            }
            else if (num >= 50) {
                ans += 'L';
                num -= 50;
            }
            else if (num >= 10) {
                ans += 'X';
                num -= 10;
            }
            else if (num >= 5) {
                ans += 'V';
                num -= 5;
            }
            else if (num >= 1) {
                ans += 'I';
                num -= 1;
            }
        }
        return ans;
    }
};
