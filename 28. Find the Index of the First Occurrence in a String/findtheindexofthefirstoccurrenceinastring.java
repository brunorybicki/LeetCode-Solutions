class Solution {
    public int strStr(String haystack, String needle) {
        int needleLength = needle.length(), haystackLength = haystack.length();

        for (int i = 0; i <= haystackLength - needleLength; i++) {
            int j = 0;

            while (j < needleLength && haystack.charAt(i + j) == needle.charAt(j)) {
                j++;
            }

            if (j == needleLength) {
                return i;
            }
        }

        return -1;
    }
}
