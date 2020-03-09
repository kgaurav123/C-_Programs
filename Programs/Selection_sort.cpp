// Selection Sort Author-Kumar Gaurav
#include<iostream>
using namespace std;
int main()
{
	int i,n,a[100],temp,l,j,min;
	cout<<"Enter number of elements in the array";
	cin>>n;
	cout<<"Enter elements of array"<<endl;
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	for(i=0;i<n-1;i++)
    {
    	min=a[i];
    	l=i;
    	for(j=i+1;j<n;j++)
    	{
		if(a[j]<min)
		{
    	 	min=a[j];
    	 	l=j;
		}
		}
      	temp=a[i];
		a[i]=a[l];
		a[l]=temp;
	}
    cout<<"sorted array is "<<endl;
    for(i=0;i<n;i++)
	cout<<a[i]<<" ";
return 0;
} 
