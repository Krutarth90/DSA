// https://leetcode.com/problems/valid-anagram/description/

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> fre(26, 0);
        if(s.size() != t.size())
            return false;
        int c = 0;
        for(auto x : s)
        {
            if(!fre[x - 'a'])
                c ++;
            fre[x - 'a'] ++;
        }
        for(auto x : t)
        {
            fre[x - 'a'] --;
            if(!fre[x - 'a'])
                c --;
        }
        if(c)
            return false;
        return true;
    }
};
