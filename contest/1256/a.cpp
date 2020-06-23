// https://codeforces.com/contest/1256/problem/A
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

void solve()
{
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, n, s;
        cin >> a >> b >> n >> s;

        bool ans = a * n + b >= s && s % n <= b;

        cout << (ans ? "YES" : "NO") << endl;
    }
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("a-input-1.txt", "r", stdin);
    //freopen("a-output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
