// https://leetcode.com/problems/isomorphic-strings/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, set<int>> m1, m2;
        for(int i = 0; i < (int)s.size(); i ++)
        {
            m1[s[i]].insert(i);
        }
        for(int i = 0; i < (int)t.size(); i ++)
        {
            m2[t[i]].insert(i);
        }
        for(int i = 0; i < (int)s.size(); i ++)
        {
            if(s[i] == t[i])
                continue;
            if(m1[s[i]] == m2[t[i]])
                continue;
            return false;
        }
        return true;
    }
};
