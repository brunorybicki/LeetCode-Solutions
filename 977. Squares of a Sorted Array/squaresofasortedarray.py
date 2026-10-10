class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        result = [0] * len(nums)

        for i in range(len(nums)):
            result[i] = nums[i] * nums[i]

        result.sort()

        return result
