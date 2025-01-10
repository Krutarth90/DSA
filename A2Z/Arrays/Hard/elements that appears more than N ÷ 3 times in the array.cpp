// https://www.naukri.com/code360/problems/majority-element_6915220?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=SUBMISSION

#include<bits/stdc++.h>
vector<int> majorityElement(vector<int> a) {
	pair<int, int> p1 = {0, INT_MIN}, p2 = {0, INT_MIN};
	int n = a.size();
	for(int i = 0; i < n; i ++)
	{
		if(!p1.first && (p2.second != a[i]))
		{
			p1.first ++;
			p1.second = a[i];
		}
		else if(!p2.first && (p1.second != a[i]))
		{
			p2.first ++;
			p2.second = a[i];
		}
		else if(p1.second == a[i])
			p1.first ++;
		else if(p2.second == a[i])
			p2.first ++;
		else
		{
			p2.first --;
			p1.first --;
		}
	}

	p2.first = 0;
	p1.first = 0;
	vector<int> ans;
	for(int i = 0; i < n; i ++)
	{
		if(a[i] == p1.second)
			p1.first ++;
		if(a[i] == p2.second)
			p2.first ++;
	}
	if(p1.first > (n / 3))
		ans.push_back(p1.second);
	if(p2.first > (n / 3))
		ans.push_back(p2.second);
	sort(ans.begin(), ans.end());
	return ans;
} 
