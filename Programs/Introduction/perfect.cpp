//Perfect number Author-Kumar Gaurav
#include<iostream>
using namespace std;
int main(){
	int t,n,r,i,s;
	cout<<"Enter total number of possible cases \t";
	cin>>t;
	while(t--){
		s=0;
		cout<<"Enter the number you want to check \t";
		cin>>n;
		for(i=1;i<n;i++)
		{r=n%i;
		if(r==0)
		s=s+i;
		}
		if(s==n)
		cout<<"Entered number is perfect number \n";
		else
		cout<<"Entered number is not perfect number \n";
	}
}
