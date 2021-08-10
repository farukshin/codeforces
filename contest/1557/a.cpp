// https://codeforces.com/contest/1557/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	int n;
	cin>>n;
	vector<ll> v(n);
	ll sm = 0;
	for(int i=0;i<n;i++) cin>>v[i], sm+=v[i];
	sort(begin(v), end(v));
	ld ans = 1.0*v[n-1] + 1.0*(sm-v[n-1])/(n-1);
	cout<< ans<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	cout.setf(std::ios::fixed); cout.precision(11);

    //solve();
    int t; cin>>t; while(t--){solve();}
    return 0;
}
