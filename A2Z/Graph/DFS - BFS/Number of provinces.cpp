// https://leetcode.com/problems/number-of-provinces/
class Solution {
public:
    void dfs(int i, vector<vector<int>>& adj, vector<bool>& vis)
    {
        int n = adj[0].size();
        if(vis[i])
            return;
        vis[i] = 1;
        for(int j = 0; j < n; j ++)
        {
            if(adj[i][j] && !vis[j])
                dfs(j, adj, vis);  
        }
        return;
    }
    int findCircleNum(vector<vector<int>>& adj) {
        int n = adj[0].size(), ans = 0;
        vector<bool> vis(n, 0);
        for(int i = 0; i < n; i ++)
        {
            if(!vis[i])
            {
                ans ++;
                dfs(i, adj, vis);
            }
        }
        return ans;
    }
};
