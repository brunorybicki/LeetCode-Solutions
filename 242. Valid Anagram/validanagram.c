bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t)) {
        return false;
    }
    
    int alphabet[26];

    for (int i = 0; i < strlen(s); i++) {
        alphabet[s[i] - 'a']++;
        alphabet[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (alphabet[i] != 0) {
            return false;
        }
    }

    return true;
}
