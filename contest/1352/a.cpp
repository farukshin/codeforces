// https://codeforces.com/contest/1352/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string s, ans = "";
        cin >> s;
        int k = 0;
        for(int j = 0; j < s.length(); j++)
            if(s[j] != '0')
                ans += s[j] + string(s.length() - j - 1, '0') + " ", k++;
        cout << k << "\n" << ans << "\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("a-input-1.txt", "r", stdin);
    //freopen("a-output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while(t--) solve();

    return 0;
}
