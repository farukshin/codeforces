// https://codeforces.com/contest/1574/problem/D //todo
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template <typename T>
inline void read(T &f)
{
    f = 0;
    T fu = 1;
    char c = getchar();
    while (c < '0' || c > '9')
    {
        if (c == '-')
            fu = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9')
    {
        f = (f << 3) + (f << 1) + (c & 15);
        c = getchar();
    }
    f *= fu;
}

template <typename T>
void print(T x)
{
    if (x < 0)
        putchar('-'), x = -x;
    if (x < 10)
        putchar(x + 48);
    else
        print(x / 10), putchar(x % 10 + 48);
}

template <typename T>
void print(T x, char t)
{
    print(x);
    putchar(t);
}

void solve()
{
    int n, m;
    read(n);

    priority_queue<pair<int, vector<int>>> q;
    vector<int> v[10];
    ll sm = 0;
    vector<int> start(n, 0);
    for (int i = 0; i < n; i++)
    {
        int cnt;
        read(cnt);
        v[i].resize(cnt);
        for (int j = 0; j < cnt; j++)
            read(v[i][j]);

        reverse(begin(v[i]), end(v[i]));
        sm += v[i][0];
    }
    q.push({sm, start});

    set<vector<int>> bad;
    read(m);
    for (int i = 0; i < m; i++)
    {
        vector<int> cur(n);
        for (int j = 0; j < n; j++)
        {
            int nn;
            read(nn);
            auto pos = lower_bound(begin(v[j]), end(v[j]), nn) - v[j].begin();
            cur[j] = pos;
        }
        bad.insert(cur);
    }

    while (!q.empty())
    {
        auto vv = q.top().second;
        auto eq = q.top().first;
        q.pop();

        if (bad.count(vv) == 0)
        {
            for (int i = 0; i < n; i++)
                print(v[i][vv[i]], ' ');
            return;
        }

        for (int i = 0; i < n; i++)
        {
            if (vv[i] >= int(v[i].size()) - 1)
                continue;
            int ceq = eq - v[i][vv[i]] + v[i][vv[i] + 1];
            ;
            ++vv[i];
            q.push({ceq, vv});
            --vv[i];
        }
    }
}

int main()
{
    solve();
    return 0;
}
