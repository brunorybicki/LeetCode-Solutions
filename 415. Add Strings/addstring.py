class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        maxLength = max(len(num1), len(num2))

        result = ["0"] * (maxLength + 1)
        carry = 0

        for i in range(maxLength):
            total = carry

            if i < len(num1):
                total += int(num1[-1 - i])

            if i < len(num2):
                total += int(num2[-1 - i])

            carry, digit = divmod(total, 10)
            result[maxLength - i] = str(digit)

        result[0] = str(carry)

        if carry == 0:
            return "".join(result[1:])

        return "".join(result)
