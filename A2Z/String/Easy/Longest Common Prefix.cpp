// https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& a) {
        string ans = "";
        for(int i = 0; i < a[0].size(); i ++)
        {
            for(int j = 1; j < (int) a.size(); j ++)
            {
                if(a[j].size() < i + 1 || a[j][i] != a[0][i])
                    return ans;
            }
            ans += a[0][i];
        }
        return ans;  
    }
};
