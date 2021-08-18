// https://codeforces.com/contest/1560/problem/D
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

queue<pair<string, int>> q;
//set<ll> used;

void clear()
{
    while(!q.empty()) q.pop();
}

bool check(ll num)
{
    int ans = 0;
    while(num)
    {
        ans += (num & 1);
        num >>= 1;
    }
    return ans == 1;
}

void solve()
{
    ll n;
    cin >> n;

    clear();
    int ans = INT_MAX;

    q.push({to_string(n), 0});
    while(!q.empty())
    {

        auto cur = q.front();
        q.pop();
        string s = cur.first;

        //cout<< ""<<s<<"\n";
        ll num = stol(cur.first);
        auto step = cur.second;

        if(check(num))
        {
            ans = step;
            clear();
            break;
        }

        set<string> st;
        if(s.size() > 1)
            for(int i = 0; i < s.size(); i++)
            {
                string cur = ( i > 0 ? s.substr(0, i) : "") + s.substr(i + 1);
                //if(cur[0] != '0' && used.count(stol(cur)) == 0)
                if(cur[0] != '0')
                    st.insert(cur);
                //q.push({ cur, step+1});
            }

        for(auto cur : st)
            q.push({ cur, step + 1});

        // for(int i=0;i<10;i++)
        // {
        // 	char ch = '0'+ i;
        // 	string cur = s + ch;

        // 	//if(used.count(stol(cur))==0)
        // 		q.push({cur, step+1});
        // }
    }

    //if(ans!= INT_MAX) {cout<<ans<<"\n"; return;}

    clear();
    q.push({to_string(n), 0});
    while(!q.empty())
    {

        auto cur = q.front();
        q.pop();
        string s = cur.first;

        //cout<< ""<<s<<"\n";
        ll num = stol(cur.first);
        auto step = cur.second;

        if(ans != INT_MAX && step > ans) continue;

        if(check(num))
        {
            cout << step << "\n";
            clear();
            return;
        }

        for(int i = 0; i < 10; i++)
        {
            char ch = '0' + i;
            string cur = s + ch;

            //if(used.count(stol(cur))==0)
            q.push({cur, step + 1});
        }



    }
    cout << -1 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    //cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
