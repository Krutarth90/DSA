// https://leetcode.com/problems/rotate-string/

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s == goal)
                return true;
        for(int i = 0 ; i < (int) s.size() - 1; i ++)
        {
            rotate(s.begin(), s.begin() + 1, s.end());
            if(s == goal)
                return true;
        }
        return false;
    }

};
