//Prime number test Brute Force Approach
#include <bits/stdc++.h>
using namespace std;
bool solve(int n){
	if(n<=1)
	return false;
    for(int i=2;i<=sqrt(n);i++)   //O(sqrt(n))
    if(n%i==0)
    return false;
    return true;
}
int main() {
 int n;
 cin>>n;
 cout<<solve(n);
}

