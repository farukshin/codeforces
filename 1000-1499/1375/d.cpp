// https://codeforces.com/contest/1375/problem/D
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

        set<ll> s;
        vector<ll> ans;
        unordered_map<ll, ll> mp;
        set<ll> ss;

        int arr[n];
        int sum = 0, mex = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        mex = sum - n * (n + 1) / 2;

        for (int i = 0; i < n; i++)
            cin >> a[i], mp[a[i]]++;

        for (int i = 0; i <= n; i++)
            if (mp[i] == 0)
                ss.insert(i);

        for (int i = 0; i < n; i++)
            if (arr[i] != i)
                s.insert(i);

        while (s.size())
        {
            k = *ss.begin();
            ss.erase(k);
            if (k != n)
            {
                s.erase(k);
                mp[a[k]]--;
                if (mp[a[k]] == 0)
                    ss.insert(a[k]);
                a[k] = k;
                mp[k]++;
                if (ss.find(k) != ss.end())
                    ss.erase(k);
                ans.pb(k);
            }
            else
            {

                mp[a[*s.begin()]]--;
                if (mp[a[*s.begin()]] == 0)
                    ss.insert(a[*s.begin()]);
                a[*s.begin()] = k;
                mp[k]++;
                if (ss.find(k) != ss.end())
                    ss.erase(k);
                ans.pb(*s.begin());
            }
        }
        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] + 1 << " ";
        cout << "\n";
    }
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("d-input-1.txt", "r", stdin);
    //freopen("d-output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}
