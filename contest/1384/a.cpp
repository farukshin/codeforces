// https://codeforces.com/contest/1384/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;

    string s(200, 'a');
    cout << s << endl;

    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        s[cur] = s[cur] == 'a' ? 'b' : 'a';
        cout << s << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("a-input-1.txt", "r", stdin);
    //freopen("a-output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
