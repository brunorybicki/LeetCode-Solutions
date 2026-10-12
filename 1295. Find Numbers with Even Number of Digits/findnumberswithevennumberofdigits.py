class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        count = 0

        for i in range(len(nums)):
            number, digits = nums[i], 0

            while number > 0:
                digits += 1
                number //= 10

            if digits % 2 == 0:
                count += 1

        return count
