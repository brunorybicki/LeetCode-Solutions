class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        result = []
        i = 0

        while columnNumber > 0:
            columnNumber -= 1
            result.append(chr(ord('A') + (columnNumber % 26)))
            i += 1
            columnNumber //= 26

        l, r = 0, i - 1

        while l < r:
            result[l], result[r] = result[r], result[l]
            l += 1
            r -= 1

        return ''.join(result)
