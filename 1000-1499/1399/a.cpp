// https://codeforces.com/contest/1399/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    bool ans = true;
    if (n > 1)
        for (int i = 1; i < n && ans; i++)
            if (abs(arr[i - 1] - arr[i]) > 1)
                ans = false;

    cout << (ans ? "YES" : "NO") << endl;
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
