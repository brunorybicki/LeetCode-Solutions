class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        needle_length, haystack_length = len(needle), len(haystack)

        for i in range(haystack_length - needle_length + 1):
            if haystack[i:i + needle_length] == needle:
                return i

        return -1
