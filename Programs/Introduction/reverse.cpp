//Reverse the digits Author-Kumar Gaurav
#include<iostream>
using namespace std;
int main(){
	int t,n,i,r,ri;
	cout<<"Enter the total number of possible cases ";
	cin>>t;
	while(t--)
	{
	ri=0;
	cout<<"Enter the required number ";
	cin>>n;
	while(n)
	{
		r=n%10;
		n=n/10;
		ri=ri*10+r;
	}
	cout<<"The reverse number is "<<ri;
	cout<<endl;
}
return 0;
}
