// https://leetcode.com/problems/spiral-matrix/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int n = a.size(), m = a[0].size();
        vector<int> ans;
        for(int c = 0; n * m > ans.size(); c ++)
        {
            for(int i = c; i < (m - c) && n * m > ans.size(); i ++)
                ans.push_back(a[c][i]);
            for(int i = c + 1; i < n - c && n * m > ans.size(); i ++)
                ans.push_back(a[i][m - 1 - c]);
            for(int i = m - 2 - c; i >= c && n * m > ans.size(); i --)
                ans.push_back(a[n - 1 - c][i]);
            for(int i = n - 2 - c; i > c && n * m > ans.size(); i --)
                ans.push_back(a[i][c]);
        }
        return ans;
    }
};
