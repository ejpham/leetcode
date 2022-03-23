#include <string>
class Solution {
public:
    int sumOfDigitSquares(int n) {
        int sum = 0, temp;
        while (n) {
            temp = n % 10;
            sum += temp * temp;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        if (n < 10) return false;
        else {
            
        }
    }
};
