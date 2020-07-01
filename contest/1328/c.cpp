// https://codeforces.com/contest/1328/problem/C
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        bool prioritetA = false;
        string a = "", b = "";

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '2')
            {
                a += (prioritetA ? '2' : '1');
                b += (prioritetA ? '0' : '1');
            }
            else if (s[i] == '1')
            {
                a += (prioritetA ? '1' : '0');
                b += (prioritetA ? '0' : '1');
                prioritetA = true;
            }
            else if (s[i] == '0')
            {
                a += '0';
                b += '0';
            }
        }
        cout << a << endl
             << b << endl;
    }
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("c-input-1.txt", "r", stdin);
    //freopen("c-output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
