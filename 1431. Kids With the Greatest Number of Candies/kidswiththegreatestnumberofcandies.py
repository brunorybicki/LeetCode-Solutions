class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        result = []
        maxCandies = 0

        for i in range(len(candies)):
            if candies[i] > maxCandies:
                maxCandies = candies[i]

        for i in range(len(candies)):
            if candies[i] + extraCandies >= maxCandies:
                result.append(True)
            else:
                result.append(False)

        return result
