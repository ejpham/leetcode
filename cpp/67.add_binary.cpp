#include <string>
class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        std::string ret = "";
        int i = a.length() - 1, j = b.length() - 1;
        bool carry = false;
        while (i >= 0 && j >= 0) {
            if (a[i] == '1' && b[j] == '1') {
                if (carry) ret = "1" + ret;
                else ret = "0" + ret;
                carry = true;
            }
            else if (a[i] == '1' || b[j] == '1') {
                if (carry) ret = "0" + ret;
                else ret = "1" + ret;
            }
            else {
                if (carry) {
                    ret = "1" + ret;
                    carry = false;
                }
                else ret = "0" + ret;
            }
            i--, j--;
        }
        while (i >= 0) {
            if (carry) {
                if (a[i] == '1') ret = "0" + ret;
                else {
                    ret = "1" + ret;
                    carry = false;
                }
            }
            else ret = a[i] + ret;
            i--;
        }
        while (j >= 0) {
            if (carry) {
                if (b[j] == '1') ret = "0" + ret;
                else {
                    ret = "1" + ret;
                    carry = false;
                }
            }
            else ret = b[j] + ret;
            j--;
        }
        if (carry) {
            ret = "1" + ret;
            carry = false;
        }
        return ret;
    }
};
