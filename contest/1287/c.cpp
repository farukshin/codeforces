#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

template <class T>
void ckmin(T &a, T b) { a = min(a, b); }
template <class T>
void ckmax(T &a, T b) { a = max(a, b); }

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

int a[100];
int k0 = 0, k1 = 0;
vector<tuple<int, int, int>> v;

bool bord0(tuple<int, int, int> tup)
{
    int len = 0, beg = 0, end = 0;
    tie(len, beg, end) = tup;

    if ((beg == 0 || a[beg - 1] % 2 == 0) && (end = 100 || a[end + 1] % 2 == 0))
        return true;

    return false;
}

bool bord1(tuple<int, int, int> tup)
{
    int len = 0, beg = 0, end = 0;
    tie(len, beg, end) = tup;

    if ((beg == 0 || a[beg - 1] % 2 == 1) && (end = 100 || a[end + 1] % 2 == 1))
        return true;

    return false;
}

void gen(bool onetype)
{
    int len = 0, beg = 0, end = 0;
    bool mod0 = false, mod1 = false;

    for (int i = 0; i < v.size(); i++)
    {
        tie(len, beg, end) = v[i];

        if ((beg == 0 || a[beg - 1] % 2 == 1) && (end = 100 || a[end + 1] % 2 == 1))
            mod1 = true;

        if ((beg == 0 || a[beg - 1] % 2 == 0) && (end = 100 || a[end + 1] % 2 == 0))
            mod0 = true;

        if (mod0 && k0 > 0)
        {
            int r = min(k0, len);
            if (len <= k0)
            {
                for (int j = beg; j <= end; j++)
                {
                    a[j] = 2;
                }
                k0 -= len;
            }
        }
    }
}

void solve()
{
    int n = 0, p = 0;
    int first = 0;

    int beg = 0;
    cin >> n;
    k0 = n / 2;
    k1 = n / 2 + n % 2;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        a[i] = p;
        if (p != 0 && p % 2 == 0)
            k0--;
        if (p != 0 && p % 2 == 1)
            k1--;
        if (p != 0 && first == 0)
            first = i;

        if (p == 0)
        {
            if (beg == 0)
            {
                beg = i;
            }
        }
        else if (beg != 0)
        {
            v.push_back(make_tuple(i - 1 - beg, beg, i - 1));
        }
    }
    sort(v.begin(), v.end());

    gen(true);
    gen(false);

    for (int i = 0; i < v.size(); i++)
    {
        if (bord0(v[i]))
        {
            int len = 0, beg = 0, end = 0;
            tie(len, beg, end) = v[i];
            if (len <= k0)
            {
                for (int j = beg; j <= end; j++)
                {
                    a[j] = 2;
                }
                k0 -= len;
            }
        }

        if (bord1(v[i]))
        {
            int len = 0, beg = 0, end = 0;
            tie(len, beg, end) = v[i];
            if (len <= k1)
            {
                for (int j = beg; j <= end; j++)
                {
                    a[j] = 1;
                }
                k1 -= len;
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (!bord0(v[i]) && !bord1(v[i]))
        {
            int len = 0, beg = 0, end = 0;
            tie(len, beg, end) = v[i];
            if (len <= k0)
            {
                for (int j = beg; j <= end; j++)
                {
                    a[j] = 2;
                }
                k0 -= len;
            }
        }
    }
}

int main()
{
    ios_b;
    solve();
    return 0;
}