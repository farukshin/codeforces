// https://codeforces.com/contest/1243/problem/B1
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
    int k;
    cin >> k;

    while (k--)
    {
        int n;
        cin >> n;

        string s, p;
        cin >> s >> p;

        string a, b;
        int count = 0, j = 0;
        bool fl = false;

        if (s == p)
        {
            cout << "Yes" << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] != p[i])
            {
                j = i;
                count++;
                break;
            }
        }

        if (j == n - 1)
        {
            cout << "No" << endl;
            continue;
        }

        for (int i = j + 1; i < n; i++)
        {
            if (s[i] != p[i])
            {
                count++;
                swap(s[j], p[i]);
                if (s == p)
                    fl = true;
                else
                    fl = false;
                break;
            }
        }

        cout << (fl ? "Yes" : "No") << endl;
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
