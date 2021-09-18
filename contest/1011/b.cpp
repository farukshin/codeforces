// https://codeforces.com/contest/1011/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

map<int, int> mp;
int n, m;

bool checkDay(int cnt)
{
    if(cnt == 0) return true;

    int maxCnt = 0;
    for(auto d : mp)
        maxCnt += d.second / cnt;
    return maxCnt >= n;
}

void solve()
{

    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int cur;
        cin >> cur;
        mp[cur]++;
    }
    int l = 0, r = 500;
    while(r - l > 1)
    {
        int mid = (r + l) / 2;
        if(checkDay(mid)) l = mid;
        else r = mid;
    }
    cout << l;
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
