#include <iostream>
using namespace std;

typedef long long ll;

ll road(ll x1, ll x2)
{
    if (x2 == x1)
        return 0;
    else
        return max(x2, x1) - min(x2, x1);
}

bool vnutri(ll x1, ll x2, ll s)
{
    if (s >= x1 && s <= x2)
        return true;
    else
        return false;
}

int main()
{
    ll x1 = 0, x2 = 0;
    ll n1 = 0, n2 = 0;
    int t = 0, i = 0;
    cin >> t;

    ll *a = new ll[t];
    ll *b = new ll[t];
    ll *c = new ll[t];
    ll *r = new ll[t];

    for (i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> r[i];
    }

    for (i = 0; i < t; i++)
    {
        x1 = c[i] - r[i];
        x2 = c[i] + r[i];
        n1 = min(a[i], b[i]);
        n2 = max(a[i], b[i]);

        if (vnutri(n1, n2, x1) == true && vnutri(n1, n2, x2) == true)
        {
            cout << road(n1, n2) - road(x1, x2) << endl;
        }
        else if(vnutri(x1, x2, n1) == true && vnutri(x1, x2, n2) == true)
        {
            cout << 0 << endl;
        }
        else if(vnutri(n1, n2, x1) == true || vnutri(n1, n2, x2) == true)
        {
            if(vnutri(n1, n2, x1) == true)
                cout << road(n1, x1) << endl;
            else
                cout << road(x2, n2) << endl;
        }
        else
            cout << road(n1, n2) << endl;
    }
    delete [] a;
    delete [] b;
    delete [] c;
    delete [] r;

    return 0;
}