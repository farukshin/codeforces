#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

vector<int> resize(vector<int> m, int ind)
{
    vector<int> r;
    for (int i = 0; i < m.size(); i++)
    {
        if (i < ind)
        {
            r.push_back(m[i]);
        }
        else if (i = ind)
        {
            r.push_back(m[i] + 1);
        }
        else if (i > ind + 1)
        {
            r.push_back(m[i]);
        }
    }
    return r;
}

int minar(vector<int> mas)
{
    int res = mas.size();
    if (res <= 1)
    {
        return res;
    }

    vector<int> replay;
    for (int i = 0; i < res - 1; i++)
    {
        if (mas[i] == mas[i + 1])
        {
            replay.push_back(i);
        }
    }

    if (replay.empty())
    {
        return res;
    }

    for (int i = 0; i < replay.size(); i++)
    {
        int k = minar(resize(mas, replay[i]));
        if (k < res)
        {
            res = k;
        }
    }

    return res;
}

int main()
{
    ios_b;

    int n, k;
    vector<int> mas;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        mas.push_back(k);
    }

    cout << minar(mas) << endl;

    return 0;
}