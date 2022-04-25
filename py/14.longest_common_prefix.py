from typing import List
class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if len(strs) < 0:
            return strs[0]
        ans = ""
        strs.sort()
        for i, value in enumerate(strs[0]):
            if value == strs[len(strs) - 1][i]:
                ans += value
            else:
                break
        return ans
