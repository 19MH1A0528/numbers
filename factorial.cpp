#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[100005];
int fact(int n)
{
	if (dp[n]!=-1)
	   return dp[n];
	if(n==1)
	   return 1;
	else
	return dp[n]=n*fact(n-1);
	
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		dp[i]=-1;
	}
	cout<<fact(n)<<endl;
	return 0;
}
