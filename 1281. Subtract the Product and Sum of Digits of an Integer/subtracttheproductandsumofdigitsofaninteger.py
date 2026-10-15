class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        product, sum = 1, 0

        while n > 0:
            digit = n % 10
            product *= digit
            sum += digit
            n //= 10

        return product - sum
