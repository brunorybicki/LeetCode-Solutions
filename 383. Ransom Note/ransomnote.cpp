class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int alphabet[26];

        for (int i = 0; i < magazine.size(); i++) {
            alphabet[magazine[i] - 'a']++;
        }

        for (int i = 0; i < ransomNote.size(); i++) {
            alphabet[ransomNote[i] - 'a']--;

            if (alphabet[ransomNote[i] - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};
