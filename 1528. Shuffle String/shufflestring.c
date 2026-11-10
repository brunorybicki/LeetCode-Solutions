char* restoreString(char* s, int* indices, int indicesSize) {
    char* result = malloc(indicesSize + 1);

    for (int i = 0; i < indicesSize; i++) {
        result[indices[i]] = s[i];
    }

    result[indicesSize] = '\0';

    return result;
}
