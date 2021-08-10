// https://codeforces.com/contest/1557/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	int n,k;
	cin>>n>>k;
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i].first;
		v[i].second = i+1;
	}
	sort(begin(v), end(v));

	int ans=1;
	for(int i=1;i<n;i++)
		if(v[i].second != v[i-1].second + 1) ans++;
	cout<<(ans<=k?"YES":"NO")<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	//cout.setf(std::ios::fixed); cout.precision(11);

    //solve();
    int t; cin>>t; while(t--){solve();}
    return 0;
}
