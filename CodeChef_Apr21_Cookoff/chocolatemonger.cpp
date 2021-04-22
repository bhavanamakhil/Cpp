#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve();
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

int t=1;
/*is Single Test case?*/cin>>t;
while(t--)
{
	solve();
	cout<<"\n";
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
void solve()
{
	int n,x;
	cin>>n>>x;
	set<ll> st;
	for(int i=0;i<n;i++)
	{
		ll temp;
		cin>>temp;
		st.insert(temp);
	}
	int dischocs=st.size();
	cout<<min(n-x,dischocs);
}
