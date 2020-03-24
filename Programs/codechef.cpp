#include<bits/stdc++.h>
#define M t
#define N 2
using namespace std;
int main(){
int t,i,j;
cin>>t;
int n[M][N],k,m[M],p[m[M]];
for(i=0;i<t;i++)
{
for(j=0;j<2;j++)
{
cin>>n[i][j];
}}
for(i=0;i<t;i++)
{
j=0;
if(n[i][j]>n[i][j+1])
{k=n[i][j]-n[i][j+1];
m[i]=k;
}
else
{k=n[i][j+1]-n[i][j];
m[i]=k;
}}
sort(m,m+t);
cout<<m[t-1];
} 
