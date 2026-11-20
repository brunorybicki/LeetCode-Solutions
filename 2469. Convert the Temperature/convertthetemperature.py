class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        result = [0, 0]

        result[0] = celsius + 273.15
        result[1] = celsius * 1.80 + 32.00

        return result
