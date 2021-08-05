// https://codeforces.com/contest/1005/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	int n;
	cin>>n;
	vector<int> v(n), ans;

	for(auto &c:v) cin>>c;
	int k=0;
	for(int i=1;i<n;i++)
		if(v[i]==1)
			{k++; ans.push_back(v[i-1]);}
	ans.push_back(v[n-1]);
	cout<<++k<<"\n";
	for(auto d:ans)
		cout<<d<<" ";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(10);

	solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}
