// https://codeforces.com/contest/1006/problem/D
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	int n;
	string a,b;
	cin>>n>>a>>b;

	int ans=0;
	if(n%2==1 && a[n/2]!=b[n/2]) ans++;

	//cout<<ans<<"\n";
	for(int i=0;i<n/2;i++)
	{
		map<char, int> mp;
		mp[a[i]]++;
		mp[a[n-1-i]]++;
		mp[b[i]]++;
		mp[b[n-1-i]]++;
		int sz = mp.size();
		if(sz == 2)
			ans+= (mp[a[i]] != 2 ? 1 : 0);
		else if(sz == 4)
			ans+=2;
		else if(sz == 3)
			ans+= 1 + (a[i] == a[n-1-i] ? 1 : 0);
		//cout<<a[i]<< a[n-1-i]<< b[i] << b[n-1-i]<<" ans="<<ans<<"\n";
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
