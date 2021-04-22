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
	int N,R;
	cin>>N>>R;
	ll A[N],B[N];
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<N;i++)
	{
		cin>>B[i];
	}
	ll maxtension=B[0],currtension=B[0],currtime=A[0];
	for(int i=1;i<N;i++)
	{
		ll relaxedtension=R*(A[i]-A[i-1]);
		relaxedtension=max(relaxedtension,0LL);
		currtension=currtension-relaxedtension+B[i];
		maxtension=max(maxtension,currtension);
	}
	cout<<maxtension;
}
