class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stack_s;
        stack<char> stack_t;

    // Process string s
    for (char c : s) {
        if (c != '#') {
            stack_s.push(c);
        } else if (!stack_s.empty()) {
            stack_s.pop();
        }
    }

    // Process string t
    for (char c : t) {
        if (c != '#') {
            stack_t.push(c);
        } else if (!stack_t.empty()) {
            stack_t.pop();
        }
    }

    // Compare the processed strings
    return stack_s == stack_t;
    }
};
