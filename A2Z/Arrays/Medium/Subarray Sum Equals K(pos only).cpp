// https://www.naukri.com/code360/problems/subarray-sums-i_1467103?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM

int findAllSubarraysWithGivenSum(vector < int > & a, int k) 
{
    int n = a.size();
    int ans = 0, s = 0, l = 0;
    for(int i = 0; i < n; i ++)
    {
        s += a[i];
        while(s > k && l < i)
        {
            s -= a[l];
            l ++;
        }
        if(s == k)
            ans ++;
    }
    return ans;
}
