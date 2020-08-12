#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[100],expo[100],l;
void primefact(int n)
{
	if(n==1)
	{
		f[l]=2;
		expo[l]=0;
		l++;
		return;
	}
	ll d=2;
	while(n>1&&1LL*d*d<=n)
	{
		ll k=0;
		while(n%d==0)
		{
			n/=d;
			k++;
		}
		if(k>0)
		{
			f[l]=d;
			expo[l]=k;
			l++;
		}
		d++;
	}
	if(n>1)
	{
		f[l]=n;
		expo[l]=1;
		l++;
	}
	
}
int main()
{
	ll n;
	cin>>n;
	primefact(n);
	for(ll i=0;i<l;i++)
	cout<<f[i]<<" "<<expo[i]<<"\n";
}
