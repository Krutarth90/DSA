// https://leetcode.com/problems/construct-k-palindrome-strings/?envType=daily-question&envId=2025-01-11

class Solution {
public:
    bool canConstruct(string s, int k) {
        vector<int> fre(26, 0);
        if(k > ((int)s.size()))
            return false;
        for(auto x : s)
            fre[x - 'a'] ++;
        int c = 0;
        for(auto x : fre)
        {
            if(x % 2)
                c ++;
        }
        if(k < c)
            return false;
        return true;
    }
};
