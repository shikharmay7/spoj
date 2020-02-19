SPOJ submission 25424527 (CPP14) plaintext list. Status: AC, problem WACHOVIA, contest SPOJ. By shikhar_may7 (shikhar), 2020-02-19 19:10:06.

    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int k,m;
    		cin>>k>>m;
    		int wt[m], val[m];
    		for(int i=0;i<m;i++)
    		{
    			int a,b;
    			cin>>a>>b;
    			wt[i]=a;
    			val[i]=b;
    		}
    		
    		int dp[m+1][k+1];
    		for(int i=0;i<=m;i++)
    		{
    			for(int j=0;j<=k;j++)
    			{
    				if(i==0 || j==0)
    					dp[i][j]=0;
    				else if(wt[i-1]>j)
    					dp[i][j] = dp[i-1][j];
    				else
    					dp[i][j] = max(dp[i-1][j], dp[i-1][j-wt[i-1]] + val[i-1]);
    			}
    		}
    		
    		cout<<"Hey stupid robber, you can get "<<dp[m][k]<<"."<<endl;
    		
    //		for(int i=0;i<=m;i++)
    //		{
    //			for(int j=0;j<=k;j++)
    //				cout<<dp[i][j]<<" ";
    //			cout<<endl;
    //		}
    	}
    	return 0;
    }
