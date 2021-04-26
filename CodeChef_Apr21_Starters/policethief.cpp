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
	cout<<"\n";
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
void solve()
{
	int N,M;
	cin>>N>>M;
	int x,y;
	cin>>x>>y;
	int a,b;
	cin>>a>>b;
	int policesteps=max(N-a,M-b);
	int thiefsteps=(N-x)+(M-y);
	if(thiefsteps <= policesteps)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
