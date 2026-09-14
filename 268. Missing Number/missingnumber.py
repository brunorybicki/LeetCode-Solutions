class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        numsSize = len(nums)
        expectedSum = numsSize * (numsSize + 1) // 2
        actualSum = 0

        for i in range(numsSize):
            actualSum += nums[i]

        return expectedSum - actualSum
