
// https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_6682399?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=SUBMISSION

function longestSubarrayWithSumK(a, k)
{
    let ans = 1, c = 0, j = 0;
    for (let i = 0; i < a.length; i++)
    {
        c += a[i];

        if (c > k)
        {
            for (; j <= i; j++)
            {
                if (c <= k)
                    break;
                c -= a[j];
            }
        }
        if (c == k)
            ans = Math.max(ans, i - j + 1);
    }
    return ans;
}

module.exports.longestSubarrayWithSumK = longestSubarrayWithSumK;
