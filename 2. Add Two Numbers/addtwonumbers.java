class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode result = null;
        ListNode current = null;
        int carry = 0;

        while (l1 != null || l2 != null || carry != 0) {
            int digit1 = 0;
            int digit2 = 0;

            if (l1 != null) {
                digit1 = l1.val;
                l1 = l1.next;
            }

            if (l2 != null) {
                digit2 = l2.val;
                l2 = l2.next;
            }

            int sum = digit1 + digit2 + carry;
            carry = sum / 10;

            if (result == null) {
                result = new ListNode(sum % 10);
                current = result;
            } else {
                current.next = new ListNode(sum % 10);
                current = current.next;
            }
        }

        return result;
    }
}
