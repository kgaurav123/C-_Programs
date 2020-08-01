//Prime number AUthor-Kumar Gaurav
#include<iostream>
using namespace std;
int main(){
	int n,i,k=0;
	cout<<"Enter number to be checked"<<endl;
	cin>>n;
	if(n>1){
	for(i=2;i<n;i++)
	{
	k=0;
	if(n%i==0)
	{
	k=k+1;
	break;
	}
	}
	if(k==0)
	cout<<"Entered number is prime number "<<endl;
	else
	cout<<"Entered number is not prime number"<<endl;
	}
	else
	cout<<"Entered number is not prime number"<<endl;
	cout<<"Want to check another number,type 1 for yes or 0 for no"<<endl;
	int a;
	cin>>a;
	if(a==1)
	main();
	else
	cout<<"Ok";
    return 0;
}
