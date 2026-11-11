char* mergeAlternately(char* word1, char* word2) {
    int length1 = strlen(word1), length2 = strlen(word2), position = 0, maxLength = 0;
    char* result = malloc(length1 + length2 + 1);

    if (length1 > length2) {
        maxLength = length1;
    } else {
        maxLength = length2;
    }

    for (int i = 0; i < maxLength; i++) {
        if (i < length1) {
            result[position] = word1[i];
            position++;
        }

        if (i < length2) {
            result[position] = word2[i];
            position++;
        }
    }

    result[position] = '\0';

    return result;
}
