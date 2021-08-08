// https://codeforces.com/contest/1009/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	int n,m;
	cin>>n>>m;
	int v[n], a[m];

	for(auto &d:v) cin>>d;
	for(auto &d:a) cin>>d;
	int ans=0, ind=0;

	for(int i=0;i<n;i++)
	{
		if(v[i]<= a[ind]) ans++, ind++;

		if(ind==m) break;
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
