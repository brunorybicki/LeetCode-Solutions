class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        result = [0] * len(nums)
        position = 0

        for i in range(len(nums)):
            if nums[i] % 2 == 0:
                result[position] = nums[i]
                position += 1

        for i in range(len(nums)):
            if nums[i] % 2 != 0:
                result[position] = nums[i]
                position += 1

        return result
