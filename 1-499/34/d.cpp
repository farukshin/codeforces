// https://codeforces.com/contest/34/problem/D
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, r1, r2;
    cin >> n >> r1 >> r2;
    --r1, --r2;
    vector<set<int>> ss(n);
    vector<int> par(n), parBfs(n);
    par[r1] = -1;

    for(int i = 0; i < n; i++)
    {
        if(i == r1) continue;
        int cur;
        cin >> cur;
        --cur;
        par[i] = cur;
        ss[i].insert(cur);
        ss[cur].insert(i);
    }

    vector<bool> used(n, false);
    queue<pair<int, int>> q;
    q.push({r2, -1});
    parBfs[r2] = -1;
    used[r2] = true;

    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        int curNode = cur.first;
        int p = cur.second;

        if(curNode == r1)
            break;

        for(auto chield : ss[curNode])
            if(!used[chield])
                q.push({chield, curNode}), used[chield] = true, parBfs[chield] = curNode;
    }

    int to = r1;
    while(to != r2)
        par[to]  = parBfs[to], to = parBfs[to];

    for(int i = 0; i < n; i++)
        if(i != r2)
            cout << par[i] + 1 << " ";
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
