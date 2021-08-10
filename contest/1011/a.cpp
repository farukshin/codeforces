// https://codeforces.com/contest/1011/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	int n,k;
	string s;
	cin>>n>>k>>s;
	set<char> st;
	for(auto ch:s) st.insert(ch);

	int ans=0, cnt=0;
	char pre = '#';
	for(auto ch:st)
		if(cnt<k && (cnt==0 || (ch - pre)>1))
			ans+=(ch-'a'+1), cnt++, pre = ch;
	cout<<(cnt == k ? ans : -1);
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	//cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}
