// https://codeforces.com/contest/1009/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s, ans;
    cin >> s;
    map<char, int> mp;
    for(int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
        if(s[i] != '1') ans += s[i];
    }

    if(mp['2'] == 0)
        cout << ans << string(mp['1'], '1');
    else
        for(int i = 0; i < ans.length(); i++)
            if(ans[i] == '2')
            {
                cout << ans.substr(0, i) << string(mp['1'], '1') << ans.substr(i);
                break;
            }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    solve();
    //int t; cin>>t; while(t--){solve();}
    return 0;
}
