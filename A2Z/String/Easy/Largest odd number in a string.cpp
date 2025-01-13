// https://leetcode.com/problems/largest-odd-number-in-string/description/

class Solution {
public:
    string largestOddNumber(string a) {
        
        for(int i = (int)a.size() - 1; i >= 0; i --)
        {
            if((a[i] - '0') % 2)
            {
                return a.substr(0, i + 1);
            }
        }
        return "";
    }
};
