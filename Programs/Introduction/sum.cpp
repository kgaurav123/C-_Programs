//Sum of digits Author-Kumar Gaurav
#include<iostream>
using namespace std;
int main(){
	int t,n,i,s,r;
	cout<<"Enter the number of test case \t";
	cin>>t;
	while(t--)
	{
	s=0;	
	cout<<"Enter the required number \t";
	cin>>n;
    while(n){
    	r=n%10;
    	n=n/10;
    	s=s+r;
	}
	cout<<"The sum of digits is \t"<<s;
	cout<<endl;
}}
