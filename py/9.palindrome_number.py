class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        input = x
        check = 0
        while input > 0:
            check = check * 10 + input % 10
            input = input // 10
        return check == x
