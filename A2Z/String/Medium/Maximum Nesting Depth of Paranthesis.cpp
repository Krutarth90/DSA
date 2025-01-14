// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, c = 0;
        for(auto x : s)
        {
            if(x == '(')
            {
                c ++;
            }
            else if(x == ')')
            {
                ans = max(ans, c);
                c --;
            }
        }
        return ans;
    }
};
