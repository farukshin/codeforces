// https://codeforces.com/contest/1008/problem/B
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
void solve()
{
    int n;
    cin>>n;
    int pre = INT_MAX;
    for(int i=0;i<n;i++)
    {
    	int a,b;
    	cin>>a>>b;
    	if(pre>= max(a,b))
    		pre = max(a,b);
    	else if(pre>= min(a,b))
    		pre = min(a,b);	
    	else {cout<<"NO"; return;} 
    	
	}
	cout<<"YES";
}
 
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
 
#ifdef _DEBUG
    freopen("a-input-1.txt", "r", stdin);
    //freopen("a-output-1.txt", "w", stdout);
#endif
 
    solve();
    //int t; cin >> t; while(t--) solve();
 
    return 0;
}