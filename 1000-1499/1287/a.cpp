#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

template <class T>
void ckmin(T &a, T b)
{
    a = min(a, b);
}
template <class T>
void ckmax(T &a, T b)
{
    a = max(a, b);
}

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define pb push_back
#define mp make_pair
#define nl '\n'
#define nls "\n"
#define F first
#define S second
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < n; ++i)
#define repr(i, n) for (int i = n - 1; i >= 0; --i)
#define Rep(i, a, n) for (int i = (a); i <= (n); ++i)
#define repst(i, n) for (auto it = n.begin(); it != n.end(); ++it)
#define Repr(i, a, n) for (int i = (n); i >= (a); --i)

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;

void solve()
{
    int t = 0, k = 0;
    string s;
    int r = 0, cur = 0;
    bool fA;
    cin >> t;
    while (t--)
    {
        cin >> k;
        cin >> s;
        r = 0;
        fA = false;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == 'P' && fA)
                cur++;
            else
                cur = 0;

            if (s[i] == 'A')
                fA = true;
            r = max(r, cur);
        }
        cout << r << nl;
    }
}

int main()
{
    ios_b;
    solve();
    return 0;
}