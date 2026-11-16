int mostWordsFound(char** sentences, int sentencesSize) {
    int maxWords = 0;

    for (int i = 0; i < sentencesSize; i++) {
        int words = 1, length = strlen(sentences[i]);

        for (int j = 0; j < length; j++) {
            if (sentences[i][j] == ' ') {
                words++;
            }
        }

        if (words > maxWords) {
            maxWords = words;
        }
    }

    return maxWords;
}
