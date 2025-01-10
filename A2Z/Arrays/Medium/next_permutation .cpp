// https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n = a.size();
        map<int, int> ma;
        for(int i = n - 1; i > 0; i --)
        {
            ma[a[i]] = i;
            ma[a[i - 1]] = i - 1;
            if(a[i - 1] < a[i])
            {
                auto it = ma.find(a[i - 1]);
                it ++;
                swap(a[i - 1], a[it->second]);
                sort(a.begin() + i, a.end());
                return;
            }
        }
        sort(a.begin(), a.end());
    }
};


// https://www.naukri.com/code360/problems/893046?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTabValue=SUBMISSION

vector<int> nextPermutation(vector<int> &a, int n)
{
        for(int i = n - 1; i > 0; i --)
        {
            if(a[i - 1] < a[i])
            {
                int mind = i;
                for(int j = i + 1; j < n; j ++)
                {
                    if(a[j] > a[i - 1] && a[mind] > a[j])
                    {
                        mind = j;
                    }
                }
                swap(a[i - 1], a[mind]);
                sort(a.begin() + i, a.end());
                return a;
            }
        }
        sort(a.begin(), a.end());
        return a;
}
