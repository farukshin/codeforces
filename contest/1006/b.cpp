// https://codeforces.com/contest/1006/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	int n,k;
	cin>>n>>k;
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++) cin>>v[i].first, v[i].second = i;

	sort(begin(v), end(v), greater<pair<int,int>>());
	vector<int> ind;
	int ans=0;
	for(int i=0;i<k;i++)
		ans+= v[i].first, ind.push_back(v[i].second);
	sort(begin(ind), end(ind));

	cout<<ans<<"\n";
	int pre=0;
	for(int i=1;i<ind.size();i++)
		cout<< ind[i]-pre<<" ", pre = ind[i];
	cout<< n-pre;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	//cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}
