int numJewelsInStones(char* jewels, char* stones) {
    int jewelsLength = strlen(jewels), stonesLength = strlen(stones), count = 0;

    for (int i = 0; i < stonesLength; i++) {
        for (int j = 0; j < jewelsLength; j++) {
            if (stones[i] == jewels[j]) {
                count++;
            }
        }
    }

    return count;
}
