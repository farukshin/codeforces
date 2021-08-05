#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	int n;
	string s1,s2;
	cin>>n>>s1>>s2;

	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(s1[i]=='0' && s2[i]=='1')
			s2[i]='0', ans++;
		else if(i>0 && s1[i]=='1' && s2[i-1]=='1')
			s2[i-1]='0', ans++;
		else if(i<n-1 && s1[i]=='1' && s2[i+1]=='1')
			s2[i+1]='0', ans++;
	}
	cout<<ans<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	//cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t; cin>>t; while(t--){solve();}
    return 0;
}
