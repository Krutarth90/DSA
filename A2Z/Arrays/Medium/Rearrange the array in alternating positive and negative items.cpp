// https://leetcode.com/problems/rearrange-array-elements-by-sign/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
        int p = 0, n = 1;
        vector<int> ans(a.size());
        for(auto x : a)
        {
            if(x > 0)
            {
                ans[p] = x;
                p += 2;
            }
            else
            {
                ans[n] = x;
                n += 2;
            }
        }
        return ans;
    }
};
