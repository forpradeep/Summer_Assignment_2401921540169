class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string str : tokens) {

            if (str == "+" || str == "-" || str == "*" || str == "/") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int comp;

                if (str == "+") {
                    comp = b + a;
                } else if (str == "-") {
                    comp = b - a;
                } else if (str == "*") {
                    comp = b * a;
                } else {
                    comp = b / a;
                }
                st.push(comp);
            } else {
                st.push(stoi(str));
            }
        }
        return st.top();
    }
};