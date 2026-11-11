class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> alphabet(26);

        for (int i = 0; i < sentence.size(); i++) {
            alphabet[sentence[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (alphabet[i] == 0) {
                return false;
            }
        }

        return true;
    }
};
