char* defangIPaddr(char* address) {
    int length = strlen(address);
    char* result = malloc(length + 7);
    int position = 0;

    for (int i = 0; i < length; i++) {
        if (address[i] == '.') {
            result[position] = '[';
            result[position + 1] = '.';
            result[position + 2] = ']';
            position += 3;
        } else {
            result[position] = address[i];
            position++;
        }
    }

    result[position] = '\0';

    return result;
}
