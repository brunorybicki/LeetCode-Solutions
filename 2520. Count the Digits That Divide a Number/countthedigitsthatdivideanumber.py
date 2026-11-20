class Solution:
    def countDigits(self, num: int) -> int:
        number, count = num, 0

        while number > 0:
            digit = number % 10

            if num % digit == 0:
                count += 1

            number //= 10

        return count
