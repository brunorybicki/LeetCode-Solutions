class Solution:
    def firstUniqChar(self, s: str) -> int:
        alphabet = [0] * 26

        for i in range(len(s)):
            alphabet[ord(s[i]) - ord('a')] += 1

        for i in range(len(s)):
            if alphabet[ord(s[i]) - ord('a')] == 1:
                return i

        return -1
