int finalValueAfterOperations(char** operations, int operationsSize) {
    int value = 0;

    for (int i = 0; i < operationsSize; i++) {
        if (operations[i][1] == '+') {
            value++;
        } else {
            value--;
        }
    }

    return value;
}
