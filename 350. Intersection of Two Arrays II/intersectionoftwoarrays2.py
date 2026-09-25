class Solution:
    def intersect(self, nums1: list[int], nums2: list[int]) -> list[int]:
        seen = [0] * 1001
        result = []

        for num in nums1:
            seen[num] += 1

        for num in nums2:
            if seen[num] > 0:
                result.append(num)
                seen[num] -= 1

        return result
