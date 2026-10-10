char* addStrings(char* num1, char* num2) {
    int maxLength = 0;

    if (strlen(num1) > strlen(num2)) {
        maxLength = strlen(num1);
    } else {
        maxLength = strlen(num2);
    }

    char* result = malloc(maxLength + 2);
    int carry = 0;

    result[maxLength + 1] = '\0';

    for (int i = 0; i < maxLength; i++) {
        int sum = carry;

        if (i < strlen(num1)) {
            sum += num1[(strlen(num1) - 1) - i] - '0';
        }

        if (i < strlen(num2)) {
            sum += num2[(strlen(num2) - 1) - i] - '0';
        }

        result[maxLength - i] = sum % 10 + '0';
        carry = sum / 10;
    }

    result[0] = carry + '0';

    if (carry == 0) {
        return result + 1;
    }

    return result;
}
