
// https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& a) {

        int ans = INT_MIN, s = 0;
        for(int i = 0; i < (int)a.size(); i ++)
        {
            s += a[i];
            ans = max(ans, s);
            if(s < 1)
                s = 0;
        }
        return ans;
    }
};
