class Solution {
public:
    vector<string> result;

    void recursive(int open, int closed, string temp) {
        if (open == 0 && closed == 0) {
            result.push_back(temp);
            return;
        }

        if (open > 0)
            recursive(open - 1, closed + 1, temp + '(');

        if (closed > 0)
            recursive(open, closed - 1, temp + ')');
    }

    vector<string> generateParenthesis(int n) {
        recursive(n, 0, "");
        return result;
    }
};