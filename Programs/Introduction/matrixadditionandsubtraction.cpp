//Addition and subtraction of Array with any number of rows and columns Author-Kumar Gaurav
#include<iostream>
using namespace std;
int main()
{
	int t,a[200][200],b[200][200],i,j,n,m,p,q,add[200][200],sub[200][200];
	cout<<"Enter number of test cases ";
	cin>>t;
	while(t--){
	cout<<"Enter number of rows and columns of first matrix respectively \n";
	cin>>n>>m;
	cout<<"Enter number of rows and columns of second matrix respectively \n";
	cin>>p>>q;
	if((n==p)&&(m==q))
	{
	cout<<"Enter elements of first matrix \n";
	for(i=0;i<n;i++)
    {
	for(j=0;j<m;j++)
    cin>>a[i][j];
	}
	cout<<"Enter elements of second matrix \n";
    for(i=0;i<p;i++)
    {
	for(j=0;j<q;j++)
    cin>>b[i][j];
	}
	cout<<"The 1st matrix is \n";
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	cout<<a[i][j]<<" ";
	cout<<"\n";
    }
	cout<<"The 2nd matrix is \n";
	for(i=0;i<p;i++)
	{
	for(j=0;j<q;j++)
	cout<<b[i][j]<<" ";
	cout<<"\n";
    }
    for(i=0;i<n;i++)
    {
	for(j=0;j<m;j++)
    {
	add[i][j]=a[i][j]+b[i][j];
	sub[i][j]=a[i][j]-b[i][j];
	}
	}
	cout<<"The result of addition is \n";
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	cout<<add[i][j]<<" ";
	cout<<"\n";
    }
    
	cout<<"The result of subtraction is \n";
	for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	cout<<sub[i][j]<<" ";
	cout<<"\n";
    }
	}
	else
	cout<<"The number of rows and columns of both matrices are different \n";
	}
	return 0;
	}
