// https://codeforces.com/contest/1006/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n), pref(n + 5), suf(n + 5);
    for(int i = 0; i < n; i++) cin >> v[i], pref[i] = v[i] + (i != 0 ? pref[i - 1] : 0);
    for(int i = n - 1; i >= 0; i--) suf[i] = v[i] + (i != n - 1 ? suf[i + 1] : 0);

    ll mid = suf[0] / 2; // - (suf[0]%2 == 0 ? 1 : 0) ;
    set<ll> st;
    for(int i = 0; i < n; i++)
        if(suf[i] <= mid)
            st.insert(suf[i]);

    int i = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        if(pref[i] > mid)
            continue;
        if(st.count(pref[i]))
        {
            cout << pref[i];
            return;
        }
    }
    cout << 0;
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
