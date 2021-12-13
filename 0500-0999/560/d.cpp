// https://codeforces.com/contest/560/problem/D
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool eqviv(string a, string b)
{
    if (a.length() != b.length())
        return false;

    if (a.length() % 2 == 1)
        return a == b;

    if (a == b)
        return true;

    ll n = a.size();
    if (eqviv(a.substr(0, n / 2), b.substr(n / 2, n / 2)))
        return eqviv(b.substr(0, n / 2), a.substr(n / 2, n / 2));
    else if (eqviv(a.substr(0, n / 2), b.substr(0, n / 2)))
        return eqviv(b.substr(n / 2, n / 2), a.substr(n / 2, n / 2));

    return false;
}

void solve()
{
    string a, b;
    cin >> a >> b;

    cout << (eqviv(a, b) ? "YES" : "NO") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("d-input-1.txt", "r", stdin);
    //freopen("d-output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
