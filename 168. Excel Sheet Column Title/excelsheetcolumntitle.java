class Solution {
    public String convertToTitle(int columnNumber) {
        char[] result = new char[8];
        int i = 0;

        while (columnNumber > 0) {
            columnNumber--;
            result[i++] = (char) ('A' + (columnNumber % 26));
            columnNumber /= 26;
        }

        for (int l = 0, r = i - 1; l < r; l++, r--) {
            char temp = result[l];
            result[l] = result[r];
            result[r] = temp;
        }

        return new String(result, 0, i);
    }
}
