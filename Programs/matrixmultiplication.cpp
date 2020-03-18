//Matrix Multiplication with any number of rows and columns Author-Kumar Gaurav
#include<iostream>
using namespace std;
int main(){
	int t,a[200][200],b[200][200],n,m,i,j,p,q,mul[400][400],k;
	cout<<"Enter number of possible test case ";
	cin>>t;
	while(t--)
	{
	cout<<"Enter number of rows and columns of first matrix respectively \n";
	cin>>n>>m;
	cout<<"Enter number of rows and columns of second matrix respectively \n";
	cin>>p>>q;
	if(m==p)
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
	cout<<"The result of multiplication is \n";
	for(i=0;i<n;i++)
	{
	for(j=0;j<q;j++)
	{
	mul[i][j]=0;
	for(k=0;k<m;k++)
	{
	mul[i][j]+=a[i][k]*b[k][j];
	}
	cout<<mul[i][j]<<" ";
	}
	cout<<'\n';}
	}
	else
	cout<<"Matrix cannot be multiplied as column of first matrix is not equal to row of second matrix";
    }
	return 0;
}
