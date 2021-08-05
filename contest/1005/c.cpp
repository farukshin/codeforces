// https://codeforces.com/contest/1005/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	int n;
	cin>>n;
	map<int,int> mp;

	int v[n];
	for(auto &c:v)
	{
		cin>>c;
		mp[c]++;
	}

	int ans=0;
	for(int i=0;i<n;i++)
	{
		bool success = false;
		for(int j=0;j<=31 && !success;j++)
		{
			int cur = (1<<j) - v[i];
			if(mp.count(cur)!=0 && (mp[cur]>1 || (mp[cur]==1 && cur != v[i]))) success = true;
		}
		if(!success)
			ans++;
	}
	cout<<ans;

}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	//cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}
