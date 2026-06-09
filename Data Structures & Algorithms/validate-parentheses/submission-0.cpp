class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        stack<char> st;  // ✅ renamed

        for(int i = 0; i < n; i++) {
            if(s[i] == '{' || s[i] == '(' || s[i] == '[') {
                st.push(s[i]);
            }
            else {
                if(st.empty()) return false;  // ✅ empty check

                if((st.top() == '{' && s[i] == '}') ||
                   (st.top() == '(' && s[i] == ')') ||
                   (st.top() == '[' && s[i] == ']')) {
                    st.pop();
                }
                else return false;  // ✅ mismatch → invalid
            }
        }

        return st.empty();
    }
};