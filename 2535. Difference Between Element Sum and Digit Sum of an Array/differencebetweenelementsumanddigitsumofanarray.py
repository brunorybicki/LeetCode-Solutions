class Solution:
    def differenceOfSum(self, nums: List[int]) -> int:
        elementSum, digitSum = 0, 0

        for i in range(len(nums)):
            number = nums[i]

            elementSum += nums[i]

            while number > 0:
                digitSum += number % 10
                number //= 10

        return elementSum - digitSum
