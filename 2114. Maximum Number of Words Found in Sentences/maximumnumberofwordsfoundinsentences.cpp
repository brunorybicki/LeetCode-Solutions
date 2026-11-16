class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for (int i = 0; i < sentences.size(); i++) {
            int words = 1;

            for (int j = 0; j < sentences[i].size(); j++) {
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
};
