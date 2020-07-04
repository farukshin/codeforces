// https://codeforces.com/contest/1335/problem/D
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int k = 0; k < 9; k++)
        {
            string s;
            cin >> s;

            for (int i = 0; i < s.size(); i++)
                if (s[i] == '9')
                    s[i] = '1';

            cout << s << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("d-input-1.txt", "r", stdin);
    //freopen("d-output-1.txt", "w", stdout);
#endif

    solve();
    return 0;
}
