SPOJ submission 25629094 (CPP14) plaintext list. Status: AC, problem PARTY, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	while(1)
    	{
    		int wt, n;
    		cin>>wt>>n;
    		if(wt==0 && n==0)
    			return 0;
    		int weight[n];
    		int profit[n];
    		for(int i=0;i<n;i++)
    		{
    			int w, p;
    			cin>>w>>p;
    			weight[i]=w;
    			profit[i]=p;
    		}	
    		int dp[wt+1][n+1];
    		for(int i=0;i<=wt;i++)
    		{
    			for(int j=0;j<=n;j++)
    			{
    				if(i==0 || j==0)
    					dp[i][j]=0;
    				else if(weight[j-1]>i)
    					dp[i][j] = dp[i][j-1];
    				else
    					dp[i][j] = max(dp[i][j-1], dp[i-weight[j-1]][j-1] + profit[j-1]);
    					
    			}
    		}
    		int g = dp[wt][n];
    		int ans;
    		for(int i=0;i<=wt;i++)
    		{
    			int flag=0;
    			for(int j=0;j<=n;j++)
    			{
    				if(dp[i][j]==g)
    				{
    					flag=1;
    					break;
    				}
    			}
    			if(flag==1)
    			{
    				ans=i;
    				break;
    			}
    		}
    		cout<<ans<<" "<<g<<endl;
    	}
    	return 0;
    } 
