// https://leetcode.com/problems/sort-characters-by-frequency/

class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int, char>> fr(62, {0, 'a'});
        for(auto x : s)
        {
            bool f = 0;
            if(isupper(x))
                f = 1;
            if(f)
            {
                fr[26 + x - 'A'].first ++;
                fr[26 + x - 'A'].second = x;
            }
            else if(x >= 'a' && x <= 'z')
            {
                fr[x - 'a'].first ++;
                fr[x - 'a'].second = x;
            }   
            else
            {
                fr[52 + x - '0'].first ++;
                fr[52 + x - '0'].second = x;
            }
        }
        string ans = "";
        sort(fr.rbegin(), fr.rend());
        for(auto [x, y] : fr)
        {
            if(!x)
                break;
            for(int j = 0; j < x; j ++)
                ans += y;
        }
        return ans;
    }
};
