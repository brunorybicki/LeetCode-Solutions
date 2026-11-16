class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        maxWords = 0

        for i in range(len(sentences)):
            words = 1

            for j in range(len(sentences[i])):
                if sentences[i][j] == ' ':
                    words += 1

            if words > maxWords:
                maxWords = words

        return maxWords
