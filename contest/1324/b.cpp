// https://codeforces.com/contest/1324/problem/B
#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    int t, n;

    cin >> t;
    while (t > 0)
    {
        cin >> n;
        int mas[5001];
        for (int i = 0; i < n; i++)
            cin >> mas[i];

        bool flag = false;

        for (int i = 0; i < n - 2; i++)
            for (int j = i + 2; j < n; j++)
                if (mas[i] == mas[j])
                    flag = true;

        cout << (flag ? "YES" : "NO") << endl;
        t--;
    }
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("b-input-1.txt", "r", stdin);
    //freopen("b-output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
