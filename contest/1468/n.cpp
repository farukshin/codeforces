// https://codeforces.com/contest/1468/problem/E
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
void solve()
{
	bool success = true;
	
	vector<int> v(3,0);
	for(int i=0;i<3;i++)
		cin>>v[i];
	int cur;
	for(int i=0;i<3;i++)
	{
		cin>>cur;
		v[i]-=cur;
		if(v[i]<0) 
			success = false;
	}
	int a,b;
	cin>>a>>b;
	if(v[0]+v[2]<a || v[1]+v[2]<b || v[0]+v[1]+v[2] <a+b) 
		success = false;
	cout<<(success?"YES":"NO")<<"\n";
}
 
int main()
{
    //solve();
    int t; cin >> t; while (t--) solve();
    return 0;
}