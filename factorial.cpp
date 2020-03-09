//Factorial of a number Author-Kumar Gaurav
#include<iostream>
using namespace std;
int main(){
	int f=1,n,i;
	cout<<"Enter the number ";
	cin>>n;
	for(i=1;i<=n;i++)
	f=f*i;
	cout<<"The factorial of the number is "<<f<<endl;
	cout<<"Want to check another number,enter 1 for yes or 0 for no"<<endl;
	int a;
	cin>>a;
	if(a==1)
	main();
	else
	cout<<"OK";
	return 0;
	}
