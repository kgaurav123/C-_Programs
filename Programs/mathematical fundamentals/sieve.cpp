#include<bits/stdc++.h>
using namespace std;
#define maxn  1000001
bool isprime[maxn];
void sieveOfEratosthenes(int n)
{
    for(int i=2;i<=n;i++)
    isprime[i]=true;
    for(int i=2;i<=n/2;i++)
    {
        if(isprime[i]==true)
        {
            for(int j=i*2;j<=n;j+=i)
            isprime[j]=false;
        }
    }
}
int main(){
    int n;
    cin>>n;
    sieveOfEratosthenes(n);
    for(int i=2;i<=n;i++)
    {
        if(isprime[i]==true)
        cout<<i<<" ";
    }
}
