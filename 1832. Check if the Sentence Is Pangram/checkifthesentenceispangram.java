class Solution {
    public boolean checkIfPangram(String sentence) {
        int[] alphabet = new int[26];

        for (int i = 0; i < sentence.length(); i++) {
            alphabet[sentence.charAt(i) - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (alphabet[i] == 0) {
                return false;
            }
        }

        return true;
    }
}
