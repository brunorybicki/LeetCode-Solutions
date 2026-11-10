class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        result, maxRight = [0] * len(arr), -1

        for i in range(len(arr) - 1, -1, -1):
            result[i] = maxRight

            if arr[i] > maxRight:
                maxRight = arr[i]

        return result
