//Palindrome number Author-Kumar Gaurav
#include<iostream>
using namespace std;
int main()
{
	int n,ri,t,temp,r;
	cout<<"Enter number of test case \t";
	cin>>t;
	while(t--)
    {
    ri=0;
    cout<<"Enter the number whose palindrome you want to make \n";
    cin>>n;
    temp=n;
    while(n){
    	r=n%10;
    	n=n/10;
    	ri=ri*10+r;
	}
	n=temp;
	if(n==ri)
	cout<<"Entered number is Palindrome number \n";
	else
	cout<<"Entered number is not Palindrome number \n";
    }
    return 0;
    }


