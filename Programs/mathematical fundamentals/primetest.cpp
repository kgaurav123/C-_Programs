#include<bits/stdc++.h>
using namespace std;
typedef long long int;
int main(){
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      int a[n],b[n];
      for(int i=0;i<n;i++)
      cin>>a[i]>>b[i];
      int k=*min_element(a,a+n),p=*min_element(b,b+n);
      int c=0;
      for(int i=0;i<n;i++)
      {
       while(a[i]!=k)
       {
	   a[i]--;
       c++;
       }
       while(b[i]!=p)
      { 
          b[i]--;
            c++;
      }
      
      }
      cout<<c<<"\n";
  }
   
}
