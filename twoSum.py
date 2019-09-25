# Given an array of integers, return indices of the two numbers such that they add up to a specific target.

# You may assume that each input would have exactly one solution, and you may not use the same element twice.

# Example:

# Given nums = [2, 7, 11, 15], target = 9,

# Because nums[0] + nums[1] = 2 + 7 = 9,
# return [0, 1].

from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for index1 in range(0, (len(nums) - 1)):
            # print(index1)
            num1 = nums[index1]
            leftNum = target - num1
            if (leftNum in nums[index1 + 1:]):
                index2 = nums.index(leftNum, index1 + 1)
                return [index1, index2]
            # print(index1)


s = Solution()
print(s.twoSum(nums = [3, 2, 4], target=6))
# s.twoSum(nums = [3, 2, 4], target=6)
