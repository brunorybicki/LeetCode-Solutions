class Solution {
    public String reverseWords(String s) {
        int length = s.length(), start = 0;
        char[] result = s.toCharArray();

        for (int i = 0; i <= length; i++) {
            if (i == length || s.charAt(i) == ' ') {
                int left = start, right = i - 1;

                while (left < right) {
                    char temp = result[left];
                    result[left] = result[right];
                    result[right] = temp;

                    left++;
                    right--;
                }

                start = i + 1;
            }
        }

        return new String(result);
    }
}
