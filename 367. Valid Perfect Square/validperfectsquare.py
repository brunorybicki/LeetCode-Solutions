class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        left, right = 1, num

        while left <= right:
            middle = left + (right - left) // 2
            square = middle * middle

            if square == num:
                return True
            elif square < num:
                left = middle + 1
            else:
                right = middle - 1

        return False
