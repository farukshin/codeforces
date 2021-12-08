// https://codeforces.com/contest/1505/problem/H
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    vector<int> a{44, 12, 49, 17, 10, 25, 18, 17, 24, 25, 20};
    vector<int> b{55, 99, 61, 99, 91, 90, 98, 30, 25, 30, 29};
    for (int i = 0; i < 11; i++)
        cout << char(a[i] + b[i]);
}

int main()
{
    solve();
    return 0;
}
