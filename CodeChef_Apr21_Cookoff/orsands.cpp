#include<bits/stdc++.h>
using namespace std;
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
	//cout<<"\n";
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
void solve()
{
	int N,Q;
	cin>>N>>Q;
	int A[N+1];
	for(int i=1;i<=N;i++)
	{
		cin>>A[i];
	}
	unordered_map<int,int> mp;
	for(int i=1;i<=N;i++)
	{
		int b=0;
		for(int j=0;j<32;j++)
		{
			b=pow(2,j);
			if(A[i] & b)
				mp[j]++;
		}
	}
	int res=0;
	for(int i=0;i<32;i++)
	{
		res+=pow(2,i)*(mp[i]>0);
	}
	cout<<res<<endl;
	for(int i=0;i<Q;i++)
	{
		int x,v;
		cin>>x>>v;
		int del=A[x];
		int b=0;
		for(int j=0;j<32;j++)
		{
			b=pow(2,j);
			if(del & b)
				mp[j]--;
		}
		A[x]=v;
		b=0;
		for(int j=0;j<32;j++)
		{
			b=pow(2,j);
			if(v & b)
				mp[j]++;
		}
		int res=0;
		for(int i=0;i<32;i++)
		{
			res+=pow(2,i)*(mp[i]>0);
		}
		cout<<res<<endl;
	}
}
