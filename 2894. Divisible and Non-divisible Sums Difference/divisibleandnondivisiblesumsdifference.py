class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        divisibleSum, nonDivisibleSum = 0, 0

        for i in range(1, n + 1):
            if i % m == 0:
                divisibleSum += i
            else:
                nonDivisibleSum += i

        return nonDivisibleSum - divisibleSum
