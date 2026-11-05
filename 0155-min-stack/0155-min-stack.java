import java.util.*;

class MinStack {
    Stack<Integer> values = new Stack<>();
    Stack<Integer> mins = new Stack<>();

    public MinStack() {
    }

    public void push(int val) {
        values.push(val);

        if (mins.isEmpty() || val <= mins.peek()) {
            mins.push(val);
        }
    }

    public void pop() {
        int removed = values.pop();

        if (removed == mins.peek()) {
            mins.pop();
        }
    }

    public int top() {
        return values.peek();
    }

    public int getMin() {
        return mins.peek();
    }
}