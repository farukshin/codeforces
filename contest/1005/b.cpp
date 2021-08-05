// https://codeforces.com/contest/1005/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    reverse(begin(s1), end(s1));
    reverse(begin(s2), end(s2));
    if(s1.length() > s2.length()) swap(s1, s2);
    int i = 0;
    for( ; i < min(s1.length(), s2.length()); i++)
        if(s1[i] != s2[i])
        {
            cout << s1.length() - i + s2.length() - i;
            return;
        }
    cout << abs((int)s1.length() - (int)s2.length());
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(10);

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}
