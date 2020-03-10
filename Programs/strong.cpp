//Strong number Author-Kumar Gaurav
#include<iostream>
using namespace std;
int main()
{
	int t,i,r,f,s,n,temp;
	cout<<"Enter total number of cases \t";
	cin>>t;
	while(t--)
	{
	cout<<"Enter the number you want to check \t";
	cin>>n;
	s=0;
	temp=n;
	while(n)
	{
	r=n%10;
	n=n/10;
	f=1;
	for(i=1;i<=r;i++)
	f=f*i;
	s=s+f;
	}
	n=temp;
	if(s==n)
	cout<<"Entered number is strong number \n";
	else
	cout<<"Entered number is not strong number \n";
	}
}
