// https://codeforces.com/contest/1294/problem/F
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

vector<vector<int>> ss;
vector<int> parrent;

int diffNum(int a, int b)
{
    if (a != 1 && b != 1)
        return 1;
    else if (a != 2 && b != 2)
        return 2;
    else
        return 3;
}

int bfs(int startNode)
{
    int MAXARR = ss.size();

    bool used[MAXARR];
    memset(used, false, sizeof(used));

    vector<int> dist(MAXARR, 0);

    queue<int> q;
    q.push(startNode);

    int maxStep = 0;
    int farthestNode = 0;
    parrent[startNode] = 0;

    while (!q.empty())
    {
        auto u = q.front();
        q.pop();
        used[u] = true;

        for (auto child : ss[u])
        {
            if (!used[child])
            {
                q.push(child);
                parrent[child] = u;

                dist[child] += dist[u] + 1;
                if (dist[child] > maxStep)
                {
                    maxStep = dist[child];
                    farthestNode = child;
                }
            }
        }
    }

    return farthestNode;
}

void solve()
{
    int n;
    cin >> n;
    ss.resize(n + 1);
    parrent.resize(n + 1);

    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        ss[x].push_back(y);
        ss[y].push_back(x);
    }

    int a = bfs(1);
    int b = bfs(a);

    vector<int> diametr;
    int cur = b;
    while (cur != a)
    {
        diametr.push_back(cur);
        cur = parrent[cur];
    }
    diametr.push_back(a);

    if (diametr.size() == n)
    {
        cout << n - 1 << endl
             << a << " " << b << " " << diffNum(a, b) << endl;
        return;
    }

    bool used[n + 1];
    memset(used, false, sizeof(used));
    for (auto node : diametr)
        used[node] = true;

    vector<int> dist(n + 1, 0);
    int maxStep = 0;
    int farthestNode = 0;

    for (auto nodeOnDiam : diametr)
    {
        queue<int> q;
        q.push(nodeOnDiam);

        while (!q.empty())
        {
            auto u = q.front();
            q.pop();
            used[u] = true;

            for (auto child : ss[u])
            {
                if (!used[child])
                {
                    q.push(child);

                    dist[child] += dist[u] + 1;
                    if (dist[child] > maxStep)
                    {
                        maxStep = dist[child];
                        farthestNode = child;
                    }
                }
            }
        }
    }

    cout << diametr.size() - 1 + maxStep << endl
         << a << " " << b << " " << farthestNode << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("f-input-1.txt", "r", stdin);
    //freopen("f-output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
