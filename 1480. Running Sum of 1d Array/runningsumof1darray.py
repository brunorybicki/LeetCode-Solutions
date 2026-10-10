class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        result = [0] * len(nums)
        sum = 0

        for i in range(len(nums)):
            sum += nums[i]
            result[i] = sum

        return result
