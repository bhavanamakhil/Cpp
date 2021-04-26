#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve();
vector<pair<ll,ll>> movements={{-1,0},{1,0},{0,1},{0,-1}};
ll dfs(ll i,ll j,vector<vector<bool>> &visited,vector<string> &a,ll n,ll m)
{
	visited[i][j]=true;
	ll adj=1;
	// cout<<i<<" "<<j<<" "<<endl;
	for(auto v:movements)
	{
		ll x=i+v.first;
		ll y=j+v.second;
		if(x>=0 && y>=0 && x<n && y<m && !visited[x][y] && a[x][y]=='1')
		{
			
			 adj+=dfs(x,y,visited,a,n,m);
		}
	}
	// cout<<adj<<" ";
	return adj;
}
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

ll t=1;
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
	ll n,m;
	cin>>n>>m;
	vector<vector<bool>> visited(n,vector<bool>(m,false));
	vector<ll> values;
	vector<string> a(n);
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		// cout<<a[i];
	}
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<a[i].size();j++)
		{
			// cout<<i<<" "<<j<<" "<<visited[i][j]<<" "<<a[i][j]<<endl;
			if(!visited[i][j] && a[i][j]=='1')
			{
				// cout<<a[i][j]<<" ";
				values.push_back(dfs(i,j,visited,a,n,m));
			}
		}
		// cout<<endl;
	}
	sort(values.begin(),values.end(),greater<ll>());
	ll ans=0ll;
	for(ll i=0;i<values.size();i++)
	{
		// cout<<values[i]<<" ";
		if(i%2==1)
			ans+=values[i];
	}
	cout<<ans;
}
