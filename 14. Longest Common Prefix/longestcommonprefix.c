char* longestCommonPrefix(char** strs, int strsSize) {
    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        while (strs[0][j] != '\0' && strs[0][j] == strs[i][j]) {
            j++;
        }

        strs[0][j] = '\0';
    }
    
    return strs[0];
}
