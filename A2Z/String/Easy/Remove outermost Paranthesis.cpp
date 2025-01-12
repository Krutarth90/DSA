// https://leetcode.com/problems/remove-outermost-parentheses/

// With stack
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


// Without stack

class Solution {
public:
    string removeOuterParentheses(string s) {
        bool f = 1;
        int l = 0;
        string ans = "";
        for(int i = 0; i < (int) s.size(); i++)
        {
            if(s[i] == '(')
            {
                if(f)
                {
                    f = 0;
                }
                else
                {
                    l ++;
                    ans += '(';
                }
            }
            else 
            {
                if(l)
                {
                    l --;
                    ans += ')';
                }
                else
                {
                    f = 1;
                }
            }
        }
        return ans;
    }
};
