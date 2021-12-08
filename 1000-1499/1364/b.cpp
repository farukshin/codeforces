//https://codeforces.com/contest/1364/problem/B
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAXARR = 1e5 + 2;
int p[MAXARR];

void solve()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
            scanf("%d", &p[i]);
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            if (i == 1 || i == n || (p[i - 1] < p[i]) != (p[i] < p[i + 1]))
                ans.push_back(p[i]);
        }
        printf("%d\n", ans.size());
        for (int i : ans)
            printf("%d ", i);
        printf("\n");
    }
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
