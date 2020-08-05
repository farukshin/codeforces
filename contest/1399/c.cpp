// https://codeforces.com/contest/1399/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

vector<int> arr;

int countPair(int n, int sum)
{
    int first = 0;
    int last = arr.size() - 1;
    int co = 0;
    while (first < last)
    {
        int s = arr[first] + arr[last];
        if (s == sum)
        {
            co++;
            first++;
            last--;
        }
        else
        {
            if (s < sum)
                first++;
            else
                last--;
        }
    }
    return co;
}

bool maxCountPair(int countCommand, int n, int sum)
{
    for (int curSum = sum / countCommand; curSum > 0; curSum--)
        if (countPair(n, curSum) == countCommand)
            return true;
    return false;
}

void solve()
{
    int n;
    cin >> n;
    int sum = 0;

    arr.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int countCommand;
    for (countCommand = n / 2; countCommand >= 0; countCommand--)
        if (maxCountPair(countCommand, n, sum))
            break;

    cout << countCommand << endl;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("c-input-1.txt", "r", stdin);
    //freopen("c-output-1.txt", "w", stdout);
#endif

    //solve();
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
