char* convertToTitle(int columnNumber) {
    char* result = malloc(8);
    int i = 0;

    while (columnNumber > 0) {
        columnNumber--;
        result[i++] = 'A' + (columnNumber % 26);
        columnNumber /= 26;
    }
    
    result[i] = '\0';

    for (int l = 0, r = i - 1; l < r; l++, r--) {
        char temp = result[l];
        result[l] = result[r];
        result[r] = temp;
    }

    return result;
}
