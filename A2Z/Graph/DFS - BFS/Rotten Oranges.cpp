// https://leetcode.com/problems/rotting-oranges/
class Solution 
{
public:
    int orangesRotting(vector<vector<int>>& a) 
    {
        queue<pair<int, pair<int, int>>> q;
        bool f = 0;
        int c = 0, m = a.size(), n = a[0].size(), ans = 0;
        for(int i = 0; i < m; i ++)
        {
            for(int j = 0; j < n; j ++)
            {
                if(a[i][j] == 2)
                    q.push({i, {j, 1}});
                else if(a[i][j] == 1)
                    c ++;
            }
        }
        while(q.size() && c)
        {
            auto y = q.front(); 
            q.pop();
            vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
            for(int i = 0; i < 4 && c; i ++)
            {
                auto x = y;
                x.first += dir[i].first;
                x.second.first += dir[i].second;
                if(min(x.first, x.second.first) < 0 || x.first >= m || x.second.first >= n)
                    continue;
                if(a[x.first][x.second.first] == 2)
                {
                    ans = max(ans, x.second.second);
                    continue;
                }
                else if(!a[x.first][x.second.first])
                    continue;
                if(a[x.first][x.second.first] == 1)
                    c --;
                a[x.first][x.second.first] = 2;
                ans = max(ans, x.second.second);
                q.push({x.first, {x.second.first, x.second.second + 1}});
            }
        }
        if(c)
            return -1;
        return ans;
    }
};
