// https://leetcode.com/problems/string-to-integer-atoi/

class Solution {
public:
    int myAtoi(string s) {
        long long val = 0, sign = 0;
        bool white = 1, f = 1;
        for(auto x : s)
        {
            if(x != ' ')
                white = 0;
            if(x == ' ' && !white)
                break;
            if(x == ' ')
                continue;
            if(x == '+' && f && !sign)
            {
                sign = 1;
                continue;
            }
            if(x == '-' && f && !sign)
            {
                sign = -1;
                continue;
            }
            if(x >= '0' && x <= '9')
            {
                val *= 10;
                if(sign == 0)
                    sign ++;
                if(sign > 0)
                {
                    val += (x - '0');
                }
                else if(sign < 0)
                {
                    val -= (x - '0');
                }
                f = 0;
                 
                if(val >= INT_MAX)
                    return INT_MAX;
                if(val <= INT_MIN)
                    return INT_MIN;
            }
            else
            {
                break;
            }
        } 
        return val;
    }
};
