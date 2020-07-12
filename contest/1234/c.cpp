// https://codeforces.com/contest/1234/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    string str[2];

    cin >> n >> str[0] >> str[1];

    int curRow = 0, curPos = 0;
    bool success = true;

    for (curPos = 0; curPos < n && success; curPos++)
        if (str[curRow][curPos] >= '3')
            if (str[(curRow == 1 ? 0 : 1)][curPos] < '3')
                success = false;
            else
                curRow = (curRow == 1 ? 0 : 1);

    cout << (success && curRow == 1 ? "YES" : "NO") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("c-input-1.txt", "r", stdin);
    //freopen("c-output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
