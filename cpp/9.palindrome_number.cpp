class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int input = x;
        long int check = 0;
        while (input > 0) {
            check = check * 10 + input % 10;
            input /= 10;
        }
        return check == x;
    }
};
