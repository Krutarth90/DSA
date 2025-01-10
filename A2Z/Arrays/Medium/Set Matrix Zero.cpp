// https://leetcode.com/problems/set-matrix-zeroes/
// https://www.naukri.com/code360/problems/zero-matrix_1171153?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=SUBMISSION
class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        bool rowFlag = 1, colFlag = 1;
        
        for(int i = 0; i < (int)a[0].size() && rowFlag; i ++)
        {
            if(a[0][i] == 0)
                rowFlag = 0;
        }
        for(int i = 0; i < a.size() && colFlag; i ++)
        {
            if(a[i][0] == 0)
                colFlag = 0;
        }
        for(int i = 1; i < (int)a.size(); i ++)
        {
            for(int j = 1; j < a[0].size(); j ++)
            {
                if(a[i][j] == 0)
                {
                    a[i][0] = 0;
                    a[0][j] = 0;
                }
            }
        }
        for(int i = 1; i < (int)a.size(); i ++)
        {
            for(int j = 1; j < a[0].size(); j ++)
            {
                if(!a[0][j] || !a[i][0])
                    a[i][j] = 0;
            }
        }
        
        if(!rowFlag)
        {
            for(int i = 0; i < a[0].size(); i ++)
            {
                a[0][i] = 0;
            }
        }
        if(!colFlag)
        {
            for(int i = 0; i < a.size(); i ++)
            {
                a[i][0] = 0;
            }
        }
    }
};
