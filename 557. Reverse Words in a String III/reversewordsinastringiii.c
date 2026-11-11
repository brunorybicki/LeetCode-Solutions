char* reverseWords(char* s) {
    int length = strlen(s), start = 0;
    char* result = malloc(length + 1);

    strcpy(result, s);

    for (int i = 0; i <= length; i++) {
        if (i == length || s[i] == ' ') {
            int left = start, right = i - 1;

            while (left < right) {
                char temp = result[left];
                result[left] = result[right];
                result[right] = temp;

                left++;
                right--;
            }

            start = i + 1;
        }
    }

    return result;
}
