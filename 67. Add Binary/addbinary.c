char* addBinary(char* a, char* b) {
    int i = 0;

    while (a[i] != '\0') {
        i++;
    }

    int j = 0;

    while (b[j] != '\0') {
        j++;
    }

    int maxLen;

    if (i > j) {
        maxLen = i;
    } else {
        maxLen = j;
    }

    static char result[10001];
    int k = maxLen + 1;
    result[k] = '\0';

    int carry = 0;
    i--;
    j--;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }

        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }

        carry = sum / 2;
        result[--k] = (sum % 2) + '0';
    }

    return result + k;
}
