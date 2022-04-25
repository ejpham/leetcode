class Solution:
    def romanToInt(self, s: str) -> int:
        roman = {'I': 1,
                 'V': 5,
                 'X': 10,
                 'L': 50,
                 'C': 100,
                 'D': 500,
                 'M': 1000}
        ans = 0
        for i, value in enumerate(s):
            ans += roman[value]
            if i > 0:
                if s[i - 1] == 'I' and (s[i] == 'V' or s[i] == 'X'):
                    ans -= 2
                if s[i - 1] == 'X' and (s[i] == 'L' or s[i] == 'C'):
                    ans -= 20
                if s[i - 1] == 'C' and (s[i] == 'D' or s[i] == 'M'):
                    ans -= 200
        return ans
