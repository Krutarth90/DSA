// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& a) {
        int ans = 0, mini = a[0];
        for(int i = 1; i < (int) a.size(); i ++)
        {
            ans = max(ans, a[i] - mini);
            mini = min(a[i], mini);
        }
        
        return ans;
    }
};
