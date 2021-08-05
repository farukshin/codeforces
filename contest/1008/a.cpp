// https://codeforces.com/contest/1008/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

bool gl(char ch)
{
    return ch == 'a' || ch == 'o' || ch == 'u' || ch == 'i' || ch == 'e';
}

void solve()
{
    string s;
    cin >> s;
    bool success = gl(s[s.size() - 1]) || s[s.size() - 1] == 'n';
    for(int i = 0; i < s.size() - 1 && success; i++)
    {
        bool fl1 = gl(s[i]);
        bool fl2 = gl(s[i + 1]);
        success = fl1 || !fl1 && fl2 || s[i] == 'n';
    }
    cout << (success ? "YES" : "NO");
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