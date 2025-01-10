// https://www.naukri.com/code360/problems/longest-successive-elements_6811740?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=SUBMISSION

int longestSuccessiveElements(vector<int>&a) {
    int ans = 1, c = 1;
    sort(a.begin(), a.end());
    for(int i = 1; i < (int)a.size(); i ++)
    {
        if(a[i - 1] + 1 == a[i])
            c ++ ;
        else if(a[i - 1] != a[i])
        {
            ans = max(ans, c);
            c = 1;
        }
    }
    ans = max(ans, c);
    return ans;
}
