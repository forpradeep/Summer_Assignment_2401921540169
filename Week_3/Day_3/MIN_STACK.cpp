class MinStack {
public:
    stack<int> stack1;
    stack<int> minstack;

    MinStack() {}

    void push(int val) {
        stack1.push(val);

        if (minstack.empty() || val <= minstack.top()) {
            minstack.push(val);
        }
    }

    void pop() {
        int poppedval = stack1.top();
        stack1.pop();

        if (poppedval == minstack.top()) {
            minstack.pop();
        }
    }

    int top() {
        return stack1.top();
    }

    int getMin() {
        return minstack.top();
    }
};