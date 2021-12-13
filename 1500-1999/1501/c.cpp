// https://codeforces.com/contest/1501/problem/C
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &d : v)
        cin >> d;

    pair<int, int> p{0, 0};
    vector<pair<int, int>> used(5e6 + 5, p);

    for (int a = 0; a < n; a++)
        for (int b = a + 1; b < n; b++)
        {
            int sm = v[a] + v[b];
            if (used[sm] == p)
                used[sm] = {a, b};
            else if (used[sm].first != a && used[sm].first != b && used[sm].second != a && used[sm].second != b)
            {
                cout << "YES\n";
                cout << used[sm].first + 1 << " " << used[sm].second + 1 << " " << a + 1 << " " << b + 1 << "\n";
                return;
            }
        }
    cout << "NO\n";
}

int main()
{
    //int t;cin>>t;while(t--)
    solve();
    return 0;
}
