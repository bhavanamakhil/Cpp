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
	int X,Y;
	cin>>X>>Y;
	vector<string> solved(N);
	for(int i=0;i<N;i++)
	{
		string s;
		cin>>s;
		solved[i]=s;
	}
	for(int i=0;i<N;i++)
	{
		int countf=0,countp=0;
		for(int j=0;j<M;j++)
		{
			if(solved[i][j]=='F')
			{
				countf++;
			}
			else if(solved[i][j]=='P')
			{
				countp++;
			}
		}
		if(countf>=X)
		{
			cout<<1;
		}
		else if(countf>=X-1 && countp>=Y)
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
}
	}
