#include <iostream> 
#include <algorithm> 
#include <cmath>
using namespace std;  
int main() 
{
	int a[1000],dp[1000],n; 
	cin>>n; 
	for(int i=0;i<n;i++) 
	{
		cin>>a[i]; 
	} 
    dp[0]=0; 
	dp[1]=a[0]; 
	for(int i=2;i<n;i++) 
	{
		dp[i]=max(dp[i-1],(dp[i-2]+a[i])); 
	} 
	cout<<dp[n-1]<<endl; 
	return 0;
}
