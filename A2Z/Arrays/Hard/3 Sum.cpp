vector<vector<int>> triplet(int n, vector<int> &a)
{
    vector<vector<int>> ans;
    sort(a.begin(), a.end());
    for(int i = 0; i < n - 2; i ++)
    {
        if(i && a[i] == a[i - 1])
            continue;
        int r = n - 1, m = i + 1;
        while(m < r)
        {
            if((a[m] + a[r] + a[i]) == 0)
            {
                ans.push_back({a[i], a[m], a[r]});
                m ++ ;
                while(m < r)
                {
                    if(a[m] != a[m - 1])
                        break;
                    m ++;
                }
                r --;
                while(m < r)
                {
                    if(a[r] != a[r + 1])
                        break;
                    r --;
                }
            }
            else if((a[m] + a[r] + a[i]) > 0)
            {
                r --;
                while(m < r)
                {
                    if(a[r] != a[r + 1])
                        break;
                    r --;
                }
            }
            else
            {
                m ++;
                while(m < r)
                {
                    if(a[m] != a[m - 1])
                        break;
                    m ++;
                }
            }       
        }
    }
    return ans;
}
