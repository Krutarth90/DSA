// https://leetcode.com/problems/remove-outermost-parentheses/

class Solution {
public:
    string removeOuterParentheses(string s) {
        bool f = 1, l = 1;
        string ans = "";
        stack<char> st;
        for(int i = 0; i < (int) s.size(); i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
                continue;
            }
            if(s[i] == '(')
            {
                st.push(s[i]);
                ans += s[i];
            }
            else
            {
                st.pop();
                if(!st.empty())
                    ans += s[i];
            }
        }
        return ans;
    }
};
