class Solution:
    def toLowerCase(self, s: str) -> str:
        result = ""

        for i in range(len(s)):
            if s[i] >= 'A' and s[i] <= 'Z':
                result += chr(ord(s[i]) + (ord('a') - ord('A')))
            else:
                result += s[i]

        return result
