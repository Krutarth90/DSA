

class Solution {
public:
    vector<int> maxSubArray(vector<int>& a) {

        int ans = INT_MIN, s = 0, start = 0, l = -1, r = -1;
        for(int i = 0; i < (int)a.size(); i ++)
        {
            if(s == 0)
                start = i;
            s += a[i];
            if(ans < s)
            {   
                ans = s;
                l = start;
                r = i;
            }
            if(s < 1)
                s = 0;
        }
        vector<int> arr (r - l + 1);
        copy(a.begin() + l, a.begin() + r + 1, arr.begin());
        return arr;
    }
};
