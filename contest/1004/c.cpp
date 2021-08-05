// https://codeforces.com/contest/1004/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	int n;
	cin>>n;
	vector<int> v(n);
	set<int> st;
	map<int, int> mp;

	for(auto &c:v) cin>>c;
	for(int i=n-1;i>=0;i--)
		mp[v[i]] = i;

	ll ans=0;
	for(int i=n-1;i>=0;i--)
	{
		if(i == mp[v[i]])
			ans+= (ll)st.size();
		st.insert(v[i]);
	}
	cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(10);

	solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}
