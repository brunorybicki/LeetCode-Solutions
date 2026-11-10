class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        result = [0] * len(nums)
        totalSum, leftSum = 0, 0

        for i in range(len(nums)):
            totalSum += nums[i]

        for i in range(len(nums)):
            rightSum, difference = totalSum - leftSum - nums[i], leftSum - (totalSum - leftSum - nums[i])

            if difference < 0:
                difference = -difference

            result[i] = difference
            leftSum += nums[i]

        return result
