// https://codeforces.com/contest/1573/problem/C //todo
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 2e5 + 5;

int n;

bool toposort(vector<int> & topo, vector<vector<int>> &g, vector<int>& indeg)
{
    priority_queue<int, vector<int>, greater<int> > pq;
    for(int i = 1; i <= n; i++)
        for(auto &it : g[i])
            indeg[it]++;
    for(int i = 1; i <= n; i++)
    {
        if(!indeg[i])
            pq.push(i);
    }
    while(!pq.empty())
    {
        int u = pq.top();
        pq.pop();
        topo.push_back(u);
        for(auto &v : g[u])
        {
            indeg[v]--;
            if(!indeg[v])
                pq.push(v);
        }
    }
    if(topo.size() < n)
        return 0;
    return 1;
}

void solve()
{
    cin >> n;
    vector<int> indeg(N);
    vector<int> topo;
    vector<vector<int>> g(N);

    for(int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;
        for(int j = 1; j <= k; j++)
        {
            int from;
            cin >> from;
            g[from].push_back(i);
        }
    }

    if(toposort(topo, g, indeg))
    {
        int ans = 1;
        for(int i = 1; i < int(topo.size()); i++)
            if(topo[i] < topo[i - 1]) ans++;
        cout << ans << "\n";
    }
    else
        cout << "-1\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
