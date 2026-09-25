class Solution {
public:
    int strStr(string haystack, string needle) {
        int needleLength = needle.length(), haystackLength = haystack.length();

        for (int i = 0; i <= haystackLength - needleLength; i++) {
            int j = 0;

            while (j < needleLength && haystack[i + j] == needle[j]) {
                j++;
            }

            if (j == needleLength) {
                return i;
            }
        }

        return -1;
    }
};
