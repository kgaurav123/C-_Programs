//Fibonacci Series Author-Kumar Gaurav
#include<iostream>
using namespace std;
int main(){
	int n,f,s,t,i,test;
	cout<<"Enter number of test case";
	cin>>test;
	while(test--)
	{
	f=0,s=1;
	cout<<"Enter number of terms of the fibonacci series"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		if(i<=1)
		t=i;
		else
		{
		t=f+s;
		f=s;
		s=t;
		}
		cout<<t;
	}
	cout<<endl;
	}
	return 0;
}
