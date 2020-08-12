/*Recursive Approach
#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int expo(int a,int b,int mod){
	if(b==0)
	return 1;
	if(b%2==0)
	return expo((1LL*a*a)%mod,b/2,mod);
	return (1LL*a*expo(1LL*a,b-1,mod))%mod;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
	     cout<<expo(a,b,mod)<<"\n";
	}
}
*/
//Iterative Approach
#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int fastexpo1(int n,int m,int mod){
    int ans=1;
	while(m>=1){
		if(m%2==0)
		{
		  n=(1LL*n*n)%mod;
		  m/=2;	
		}
		else{
			ans=(1LL*n*ans)%mod;
			m--;
		}
	}
	return ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		cout<<fastexpo1(n,m,mod)<<"\n";
	}
}
