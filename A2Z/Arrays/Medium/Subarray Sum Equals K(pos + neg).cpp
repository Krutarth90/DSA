// https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int ans = 0, s = 0;
        unordered_map<int, int> ma;
        for(int i = 0; i < (int) a.size(); i ++)
        {
            s += a[i];
            if(s == k)
                ans ++;
            ans += ma[s - k];
            ma[s] ++;
        }
        return ans;
    }
};

