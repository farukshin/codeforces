#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
	int p;
	cin>>p;

	for(int b=2;b<=p;b++)
	{
		int curMod = p%b;
		for(int a=b-1;a>=2;a--)
			if(p%a == curMod)
			{
				cout<<a<<" "<<b<<"\n";
				return;
			}
	}
	cout<<-1<<"\n";
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
	//cout.setf(std::ios::fixed); cout.precision(9);

    //solve();
    int t; cin>>t; while(t--){solve();}
    return 0;
}
