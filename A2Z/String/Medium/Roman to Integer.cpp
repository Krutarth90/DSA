// https://leetcode.com/problems/roman-to-integer/
class Solution {
public:
    int romanToInt(string s) {
        int c = 0;
        map<char, int> ma;
        ma['I'] = 1;
        ma['V'] = 5;
        ma['X'] = 10;
        ma['L'] = 50;
        ma['C'] = 100;
        ma['D'] = 500;
        ma['M'] = 1000;
        bool f = 0;
        c += ma[s.back()];
        for(int i = (int) s.size() - 2; i >= 0; i --)
        {
            if(ma[s[i]] < ma[s[i + 1]])
            {
                f = 1;
                c -= ma[s[i]];
            }
            else if(ma[s[i]] > ma[s[i + 1]])
            {
                f = 0;
                c += ma[s[i]];
            }
            else if(f)
            {
                c -= ma[s[i]];
            }
            else
            {
                c += ma[s[i]];
            }
        }
        return c;   
    }
};
