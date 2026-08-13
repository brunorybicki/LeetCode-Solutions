class Solution {
    public int lengthOfLongestSubstring(String s) {
        int maxLength = 0;

        for (int i = 0; i < s.length(); i++) {
            int seenCharacters[] = new int[256];
            int currentLength = 0;

            for (int j = i; j < s.length(); j++) {
                char c = s.charAt(j);

                if (seenCharacters[c] == 1) {
                    break;
                }

                seenCharacters[c] = 1;
                currentLength++;
            }

            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
        }

        return maxLength;
    }
}
