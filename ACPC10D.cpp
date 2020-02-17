#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
	lli c=0;
	while(1)
	{
		lli n;
		cin>>n;
		if(n==0)
			return 0;
		c+=1;
		lli mat[n][3];
		for(lli i=0;i<n;i++)
			for(lli j=0;j<3;j++)
				cin>>mat[i][j];
		
		lli dp[n][3];
		for(lli i=0;i<3;i++)
			dp[0][i] = mat[0][i];
		dp[0][2] += dp[0][1];  
		dp[1][0] = dp[0][1] + mat[1][0];
		dp[1][1] = mat[1][1] + min(dp[0][1], min(dp[1][0], dp[0][2]));
		dp[1][2] = min(dp[0][1], min(dp[1][1], dp[0][2])) + mat[1][2];
		
		for(lli i=2;i<n;i++)
		{
			for(lli j=0;j<3;j++)
			{
					
				if(j==0)
					dp[i][j] = mat[i][j] + min(dp[i-1][j], dp[i-1][j+1]);
				
				else if(j==1)
					dp[i][j] = mat[i][j] + min(dp[i-1][j-1], min(dp[i-1][j], min(dp[i-1][j+1], dp[i][j-1])));
					
				else if(j==2)
					dp[i][j] = mat[i][j] + min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]));	
					
			}
		}
//		for(lli i=0;i<n;i++)
//		{
//			for(lli j=0;j<3;j++)
//				cout<<dp[i][j]<<" ";
//			cout<<endl;
//		}
		cout<<c<<"."<<" "<<dp[n-1][1]<<endl;
	}
	return 0;
}
