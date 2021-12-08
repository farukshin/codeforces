// https://codeforces.com/contest/1549/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int cnt[200005];

void solve()
{
    int n, m;
    cin >> n >> m;

    memset(cnt, 0, sizeof cnt);

    int ujaz = 0;
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        --a, --b;
        if(a > b) swap(a, b);
        cnt[a]++;
        if(cnt[a] == 1) ujaz++;
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int rep, a, b;
        cin >> rep;
        if(rep == 1)
        {
            cin >> a >> b;
            --a, --b;
            if(a > b) swap(a, b);
            cnt[a]++;
            if(cnt[a] == 1) ujaz++;
        }
        else if(rep == 2 )
        {
            cin >> a >> b;
            --a, --b;
            if(a > b) swap(a, b);
            cnt[a]--;
            if(cnt[a] == 0) ujaz--;
        }
        else if(rep == 3 )
            cout << n - ujaz << "\n";
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
