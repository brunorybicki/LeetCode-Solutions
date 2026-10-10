class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        alphabet = [0] * 26

        for i in range(len(magazine)):
            alphabet[ord(magazine[i]) - ord('a')] += 1

        for i in range(len(ransomNote)):
            alphabet[ord(ransomNote[i]) - ord('a')] -= 1

            if alphabet[ord(ransomNote[i]) - ord('a')] < 0:
                return False

        return True
