#include<bits/stdc++.h>
using namespace std;
int main()
{
	int dp[1005];
	for(int i=0;i<1005;i++)
		dp[i]=-1;
	for(int i=1;i<32;i++)
		dp[i*i]=1;
	
	for(int i=2;i<1001;i++)
	{
		int low = 1000;
		if(dp[i]!=-1)
			continue;
		for(int j=1;j*j<=i;j++)
		{
			int rem = i-(j*j);
			if(dp[rem]+1 < low)
				low = dp[rem]+1;
			
		}
		dp[i] = low;
	}
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<dp[n]<<endl;
	}
	return 0;
}
