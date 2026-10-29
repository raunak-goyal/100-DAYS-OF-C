
class Solution {
    public ListNode[] splitListToParts(ListNode head, int k) {
        int length = 0;
        ListNode current = head;

        while (current != null) {
            length++;
            current = current.next;
        }

        int baseSize = length / k;
        int extra = length % k;

        ListNode[] result = new ListNode[k];
        current = head;

        for (int i = 0; i < k; i++) {
            result[i] = current;

            int partSize = baseSize + (i < extra ? 1 : 0);

            for (int j = 1; j < partSize; j++) {
                if (current != null) {
                    current = current.next;
                }
            }

            if (current != null) {
                ListNode nextPart = current.next;
                current.next = null;
                current = nextPart;
            }
        }

        return result;
    }
}
