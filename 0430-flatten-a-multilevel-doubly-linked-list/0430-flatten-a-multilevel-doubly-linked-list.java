
class Solution {
    public Node flatten(Node head) {
        Node current = head;

        while (current != null) {
            if (current.child != null) {
                Node child = current.child;
                Node next = current.next;

                current.next = child;
                child.prev = current;
                current.child = null;

                Node tail = child;
                while (tail.next != null) {
                    tail = tail.next;
                }

                tail.next = next;
                if (next != null) {
                    next.prev = tail;
                }
            }

            current = current.next;
        }

        return head;
    }
}
