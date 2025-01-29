// https://leetcode.com/problems/container-with-most-water/description/

class Solution 
{
public:
    int maxArea(vector<int>& a) 
    {
        int n = a.size();
        long long  l = 0, r = n - 1, ans = 0;

        while(l < r)
        {
            ans = max(ans, a[l] * a[r] * (r - l));
            if(a[l] < a[r])
                l ++;
            else
                r ++;
        }
        return ans;
    }
};
