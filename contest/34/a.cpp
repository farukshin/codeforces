// https://codeforces.com/contest/34/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	int n;
	cin>>n;
	int v[n];
	for(auto &d:v) cin>>d;
	int pos=-1, ans = INT_MAX;
	for(int i=0;i<n;i++)
	{
		int cur = abs(v[i] - v[(i+1)%n]);
		if(cur < ans) ans=cur, pos = i;
	}
	cout<<pos+1 <<" " << (pos+1)%n +1;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	//cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}
