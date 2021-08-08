// https://codeforces.com/contest/34/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	int n,m;
	cin>>n>>m;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int cur;
		cin>>cur;
		if(cur<0) v.push_back(cur);
	}
	sort(begin(v), end(v));
	int ans=0;
	for(int i=0;i<min(m, int(v.size()));i++)
		ans+= v[i];
	cout<<-1*ans;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	//cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}
