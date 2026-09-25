import java.util.Arrays;

class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        int[] seen = new int[1001];
        int[] result = new int[1001];
        int size = 0;

        for (int num : nums1) {
            seen[num]++;
        }

        for (int num : nums2) {
            if (seen[num] > 0) {
                result[size++] = num;
                seen[num]--;
            }
        }

        return Arrays.copyOf(result, size);
    }
}
