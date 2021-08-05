// https://codeforces.com/contest/1000/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int cnt(map<string, int> mp)
{
	int res =0;
	for(auto d:mp)
		if(d.second>=0) res+=d.second;
	return res;
}

void solve()
{
	map<string, int> mp1, mp2, mp3, mp4;

	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s; cin>>s;
		if(s.length()==1) mp1[s]++;
		else if(s.length()==2) mp2[s]++;
		else if(s.length()==3) mp3[s]++;
		else if(s.length()==4) mp4[s]++;
	}

	for(int i=0;i<n;i++)
	{
		string s; cin>>s;
		if(s.length()==1) mp1[s]--;
		else if(s.length()==2) mp2[s]--;
		else if(s.length()==3) mp3[s]--;
		else if(s.length()==4) mp4[s]--;
	}

	int ans= cnt(mp1) + cnt(mp2) + cnt(mp3) + cnt(mp4);
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
