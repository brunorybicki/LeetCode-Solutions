int lengthOfLongestSubstring(char* s) {
    int n = strlen(s);
    int maxLength = 0;

    for (int i = 0; i < n; i++) {
        int seenCharacters[256] = {0};
        int currentLength = 0;

        for (int j = i; j < n; j++) {
            char c = s[j];

            if (seenCharacters[c]) {
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
