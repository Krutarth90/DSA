
// https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k

int lenOfLongestSubarr(vector<int>& a, int k) {
        
        map<int, int> mp;
        int ans = 0, s = 0;
        mp[0] = -1;
        for(int i = 0; i < (int) a.size(); i ++)
        {
            s += a[i];
            if(mp.find(s) == mp.end())
                mp[s] = i;
            if(mp.find(s - k) == mp.end())
                continue;
            ans = max(ans, i - mp[s - k]);
        }
        return ans;
    }
