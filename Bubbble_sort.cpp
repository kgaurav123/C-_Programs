#include<iostream>
using namespace std;
int main()
{
int n,i,a[100],s=0,temp,j;
cout<<"Enter number of elements in the array";
cin>>n;
cout<<"Enter elements of the array"<<endl;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n-1;i++)
{
	for(j=0;j<(n-1-i);j++)
	{
	if(a[j]>a[j+1])
	{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	s=1;
	}
	}
	if(s==0)
	{
	break;
	}
}
cout<<"Sorted array is";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
return 0;
}
