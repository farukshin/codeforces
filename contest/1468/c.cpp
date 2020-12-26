#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
struct CustomCompare
{
    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2)
    {
        if(p1.first != p2.first)
			return p1.first < p2.first;
		return p1.second > p2.second;
    }
};
 
unordered_set<int> st;
queue<int> q1;
priority_queue<pair<int, int>, vector<pair<int, int>>, CustomCompare> q2;
 
int k=0;
	
void tik(int a, int b)
{
	if(a==1)
	{
		k++;
		st.insert(k);
		q1.push(k);
		q2.push({b, k});
	}
	else if(a==2)
		while(true)
		{
			auto cur = q1.front();
			q1.pop();
			if(!st.count(cur)) continue;
			
			cout<< cur << " ";
			st.erase(cur);
			break;
		}
	else if(a==3)
		while(true)
		{
			auto cur = q2.top();
			q2.pop();
			if(!st.count(cur.second)) continue;
			
			cout<< cur.second << " ";
			st.erase(cur.second);
			break;
		}
}
 
void solve()
{
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		int a,b=0;
		cin>>a;
		if(a==1) cin>>b;
		tik(a,b);
	}
}
 
int main()
{
    solve();
    return 0;
}