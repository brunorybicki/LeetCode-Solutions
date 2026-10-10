int firstUniqChar(char* s) {
    int alphabet[26];

    for (int i = 0; i < strlen(s); i++) {
        alphabet[s[i] - 'a']++;
    }

    for (int i = 0; i < strlen(s); i++) {
        if (alphabet[s[i] - 'a'] == 1) {
            return i;
        }
    }

    return -1;
}
