// https://leetcode.com/problems/reverse-words-in-a-string/

class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string t = "", ans = "";
        for(int i = n - 1; i >= 0; i --)
        {
            if(s[i] == ' ')
            {
                if(ans.size() && t.size())
                    ans += ' ';
                while(t.size())
                {
                    ans += t.back();
                    t.pop_back();
                }
            }
            else
            {
                t += s[i];
            }
        }
        if(ans.size() && t.size())
            ans += ' ';
        while(t.size())
        {
            ans += t.back();
            t.pop_back();
        }
        return ans;
    }
};
