// https://codeforces.com/contest/1234/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n, k;
    cin >> n >> k;

    queue<int> dial;
    set<int> ids;
    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        if (!ids.count(cur))
        {
            if (int(dial.size()) >= k)
            {
                int front = dial.front();
                dial.pop();
                ids.erase(front);
            }
            ids.insert(cur);
            dial.push(cur);
        }
    }

    vector<int> ans;
    while (!dial.empty())
    {
        ans.push_back(dial.front());
        dial.pop();
    }

    cout << ans.size() << endl;
    for (int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i] << (i == 0 ? "\n" : " ");
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("b-input-1.txt", "r", stdin);
    //freopen("b-output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
