// https://codeforces.com/contest/1216/problem/C
// #tech_debt
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

struct prjamoug
{
    int x1;
    int y1;
    int x2;
    int y2;
};

prjamoug intersection(prjamoug r1, prjamoug r2)
{
    int lf, rg, up, dn;
    lf = max(min(r1.x1, r1.x2), min(r2.x1, r2.x2));
    rg = min(max(r1.x1, r1.x2), max(r2.x1, r2.x2));
    up = min(max(r1.y1, r1.y2), max(r2.y1, r2.y2));
    dn = max(min(r1.y1, r1.y2), min(r2.y1, r2.y2));

    prjamoug ans = {0, 0, 0, 0};
    bool fl = (rg > lf && up > dn);

    if (fl)
    {
        ans.x1 = lf;
        ans.y1 = dn;
        ans.x1 = rg;
        ans.y1 = up;
    }

    return ans;
}

ll s(prjamoug r)
{
    return 1.0 * abs(r.x2 - r.x1) * abs(r.y2 - r.y1);
}

void solve()
{
    prjamoug white, black1, black2;

    cin >> white.x1 >> white.y1 >> white.x2 >> white.y2;
    cin >> black1.x1 >> black1.y1 >> black1.x2 >> black1.y2;
    cin >> black2.x1 >> black2.y1 >> black2.x2 >> black2.y2;

    prjamoug wb1 = intersection(white, black1);
    prjamoug wb2 = intersection(white, black2);
    prjamoug inter = intersection(wb1, wb2);

    cout << (s(white) > s(wb1) + s(wb2) - s(inter) ? "YES" : "NO") << endl;
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
