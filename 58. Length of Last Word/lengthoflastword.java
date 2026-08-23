class Solution {
    public int lengthOfLastWord(String s) {
        int length = s.length();
        int i = length - 1;

        while (i >= 0 && s.charAt(i) == ' ') {
            i--;
        }

        int count = 0;

        while (i >= 0 && s.charAt(i) != ' ') {
            count++;
            i--;
        }
        
        return count;
    }
}
