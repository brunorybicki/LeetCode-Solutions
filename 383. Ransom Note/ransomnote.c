bool canConstruct(char* ransomNote, char* magazine) {
    int alphabet[26];

    for (int i = 0; i < strlen(magazine); i++) {
        alphabet[magazine[i] - 'a']++;
    }

    for (int i = 0; i < strlen(ransomNote); i++) {
        alphabet[ransomNote[i] - 'a']--;

        if (alphabet[ransomNote[i] - 'a'] < 0) {
            return false;
        }
    }

    return true;
}
