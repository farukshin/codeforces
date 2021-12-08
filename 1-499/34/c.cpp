// https://codeforces.com/contest/34/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;
    replace(begin(s), end(s), ',', ' ');
    istringstream  io(s);
    set<int> st;
    int cur;
    while(io >> cur)
        st.insert(cur);
    vector<int> v;
    copy(begin(st), end(st), back_inserter(v));
    auto vv = v;

    for(int i = 1; i < vv.size() - 1; i++)
        if(v[i] - 1 == v[i - 1] && v[i] + 1 == v[i + 1])
            vv[i] = 0;

    cout << v[0];
    for(int i = 1; i < v.size(); i++)
        if(vv[i] == 0) continue;
        else if(vv[i - 1] == 0) cout << "-" << v[i];
        else if(vv[i - 1] == vv[i] - 1) cout << "-" << v[i];
        else cout << "," << v[i];
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
