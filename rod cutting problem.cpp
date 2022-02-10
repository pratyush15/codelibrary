#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int price[1000]; 
    int n; 
	cin>>n; 
	for(int i=0;i<n;i++)  
	{
		cin>>price[i]; 
	}
    int dp[1000]; //store the maximum price of length i
    dp[0] = 0;  
    for (int i = 1; i<=n; i++) 
    { 
       int max_val = INT_MIN; 
       for (int j = 0; j < i; j++) 
         max_val = max(max_val, price[j] + dp[i-j-1]); 
       dp[i] = max_val; 
    } 
    cout<<"Maximum price of rod is:"<<" ";
    cout<<dp[n]<<endl;
}
