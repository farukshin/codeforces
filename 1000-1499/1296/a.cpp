// https://codeforces.com/contest/1296/problem/A
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
        cin >> n;
        int arr[2] = {0, 0};

        for (int i = 0; i < n; i++)
        {
            int cur;
            cin >> cur;
            arr[cur % 2]++;
        }

        cout << (arr[1] % 2 == 1 || (arr[1] > 0 && arr[0] > 0) ? "YES" : "NO") << endl;
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
