class Solution:
    def toHex(self, num: int) -> str:
        digits = "0123456789abcdef"
        result = ""

        for i in range(8):
            result = digits[num & 15] + result
            num >>= 4

        start = 0

        while result[start] == '0' and start < 7:
            start += 1

        return result[start:]
