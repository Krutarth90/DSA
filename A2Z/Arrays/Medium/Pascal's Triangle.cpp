// https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n == 1)
            return {{1}};
        if(n == 2)
            return {{1}, {1, 1}};
        vector<vector<int>> ans = {{1}, {1, 1}};
        n -= 2;

        for(int i = 0; i < n; i ++)
        {
            vector<int> temp = {1};
            for(int j = 0; j < ans.back().size() - 1; j ++)
                temp.push_back(ans.back()[j] + ans.back()[j + 1]);
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans;   
    }
};
