// https://codeforces.com/contest/1504/problem/D
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
void next(int &a, int &b, int eps)
{
    b += 2;
    if (b > n)
        a++, b = (a + eps) % 2 + 1;
}

void solve()
{
    cin >> n;
    int a1 = 1, b1 = 1, a2 = 1, b2 = 2;
    for (int i = 0; i < n * n; i++)
    {
        int color;
        cin >> color;
        if (color != 1 && a1 <= n)
        {
            cout << "1 " << a1 << " " << b1 << endl;
            next(a1, b1, 1);
        }
        else if (color != 2 && a2 <= n)
        {
            cout << "2 " << a2 << " " << b2 << endl;
            next(a2, b2, 0);
        }
        else if (a1 <= n)
        {
            cout << "3 " << a1 << " " << b1 << endl;
            next(a1, b1, 1);
        }
        else
        {
            cout << "3 " << a2 << " " << b2 << endl;
            next(a2, b2, 0);
        }
    }
}

int main()
{
    solve();
    return 0;
}
