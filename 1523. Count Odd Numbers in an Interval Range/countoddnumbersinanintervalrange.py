class Solution:
    def countOdds(self, low: int, high: int) -> int:
        oddsUpToHigh, oddsBelowLow = (high + 1) // 2, low // 2

        return oddsUpToHigh - oddsBelowLow
