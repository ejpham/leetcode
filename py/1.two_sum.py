import enum
from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}
        for i, value in enumerate(nums):
            if target - value in map:
                return map[target - value], i
            else:
                map[value] = i
        return -1, -1
