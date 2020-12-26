// https://codeforces.com/contest/1468/problem/M
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
void solve()
{
	int n;
	//cin>>n;
	scanf("%d", &n);
	set<pair<int, int>> st;
	bool success = false;
	unordered_map<int, vector<int>> mp;
	pair<int, int> ans;
	
	for(int i=0;i<n;i++)
	{
		int k;
		//cin>>k;
		scanf("%d", &k);
		for(int j=0;j<k;j++)
		{
			int cur;
			//cin>>cur;
			scanf("%d", &cur);
			if(success)
				continue;
			
			mp[cur].push_back(i);
			int sz = mp[cur].size();
			if(sz>1)
				for(int r=0;r<sz-1;r++)
				{
					pair<int, int> cc = {mp[cur][r], mp[cur][sz-1]};
					if(st.count(cc))
						success = true, ans = cc;
					else st.insert(cc);
				}
		}
	}
	if(success)
		//cout<<ans.first+1 << " " << ans.second+1<<"\n";
		printf("%d %d\n", ans.first+1, ans.second+1);
	else 
		//cout<<-1<<"\n";
		printf("-1\n");
}
 
int main()
{
    //solve();
    int t; 
    //cin >> t;
    scanf("%d", &t);
    while (t--) solve();
    return 0;
}