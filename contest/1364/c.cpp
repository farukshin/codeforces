//https://codeforces.com/contest/1364/problem/C
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

const int MAXARR = 1e5 + 5;
int a[MAXARR], b[MAXARR];
bool ex[MAXARR];

void solve()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    memset(b, -1, sizeof(b));

    for (int i = 1; i <= n; i++)
        if (a[i] != a[i - 1])
        {
            b[i] = a[i - 1];
            ex[b[i]] = 1;
        }

    ex[a[n]] = 1;
    int m = 0;
    for (int i = 1; i <= n; i++)
    {
        while (ex[m])
            m++;

        if (b[i] == -1)
        {
            b[i] = m;
            ex[m] = 1;
        }
        printf("%d ", b[i]);
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
