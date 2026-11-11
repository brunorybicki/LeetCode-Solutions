class Solution:
    def reverseWords(self, s: str) -> str:
        length, start, result = len(s), 0, list(s)

        for i in range(length + 1):
            if i == length or s[i] == ' ':
                left, right = start, i - 1

                while left < right:
                    result[left], result[right] = result[right], result[left]

                    left += 1
                    right -= 1

                start = i + 1

        return "".join(result)
