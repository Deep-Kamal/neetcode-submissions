class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for (string s : operations) {
            char c = s[0];

            if (c == '-') { // Handle negative integers
                int num = stoi(s);
                st.push(num);
            } else if (isdigit(c)) { // Handle positive integers
                int num = stoi(s);
                st.push(num);
            } else if (c == 'C') { // Remove the last score
                st.pop();
            } else if (c == 'D') { // Push double the last score
                st.push(st.top() * 2);
            } else if (c == '+') { // Push the sum of the last two scores
                int top1 = st.top(); st.pop();
                int top2 = st.top();
                st.push(top1); // Restore the stack
                st.push(top1 + top2);
            }
        }

        int ans = 0;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};