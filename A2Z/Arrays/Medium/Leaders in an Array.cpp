// https://www.naukri.com/code360/problems/superior-elements_6783446?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=SUBMISSION

vector<int> superiorElements(vector<int>&a) {
    int ma = a.back();
    vector<int> ans = {ma};
    for(int j = (int) a.size() - 2; j >= 0; j --)
    {
        if(a[j] > ma)
            ans.push_back(a[j]);
        ma = max(ma, a[j]);
    }
    return ans;
}
