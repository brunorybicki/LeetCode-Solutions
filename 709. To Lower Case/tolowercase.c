char* toLowerCase(char* s) {
    int length = strlen(s);
    char* result = malloc(length + 1);

    for (int i = 0; i < length; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            result[i] = s[i] + ('a' - 'A');
        } else {
            result[i] = s[i];
        }
    }

    result[length] = '\0';

    return result;
}
