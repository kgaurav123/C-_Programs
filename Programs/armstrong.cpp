//Armstrong number of n_digits Author-Kumar Gaurav
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t,n,p,k,temp,r;
	cout<<"Enter number of test cases \n";
	cin>>t;
	while(t--)
	{ p=0,k=0;
		cout<<"Enter the number you want to check \n";
		cin>>n;
		temp=n;
		while(n)
		{
		n=n/10;
		k=k+1;}
		n=temp;
		while(n)
		{r=n%10;
		n=n/10;
		p=pow(r,k)+p;
		}
		n=temp;
		if(p==n)
		cout<<"Entered number is armstrong number \n";
		else
		cout<<"Entered number is not armstrong number \n";
	}
	return 0;
}
