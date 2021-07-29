// https://codeforces.com/contest/1554/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	ll n,k;
	cin>>n>>k;
	vector<ll> v(n);

	for(int i=0;i<n;i++)
		cin>>v[i];

	ll ans=LLONG_MIN;
	for(ll i=max(n-105, ll(0));i<n;i++)
		for(ll j=i+1;j<n;j++)
			ans = max(ans, (i+1)*(j+1)-k*(v[i]|v[j]));

	cout<<ans<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	//cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t; cin>>t; while(t--){solve();}

    return 0;
}
