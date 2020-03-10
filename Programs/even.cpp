//Even number Author- Kumar Gaurav
#include<iostream>
using namespace std;
int main(){
	int t,n,r;
	cout<<"Enter possible number of cases \n";
	cin>>t;
	while(t--)
	{
		cout<<"Enter the number you want to check \n";
		cin>>n;
		r=n%2;
		if(r==0)
		cout<<"Entered number is even number \n";
		else
		cout<<"Entered numbered is odd number \n";
	}
}
