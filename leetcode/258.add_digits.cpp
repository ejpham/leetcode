class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) num = (num % 10) + (num / 10);
        return num;
        /*
        O(1) time complexity using digit root concept
            if (num == 0) return 0;
            else if (num % 9 == 0) return 9;
            else return num % 9;
        */
       /*
        O(!) time complexity one liner
            return 1 + (num - 1) % 9;
       */
    }
};