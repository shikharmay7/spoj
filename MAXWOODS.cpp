SPOJ submission 25598736 (CPP14) plaintext list. Status: AC, problem MAXWOODS, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    int arr[205][205];
    int dp[2][205][205];
     
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int m,n;
    		cin>>m>>n;
    		for(int i=1;i<=m;i++)
    		{
    			for(int j=1;j<=n;j++)
    			{
    				char ch;
    				cin>>ch;
    				if(ch=='T')
    					arr[i][j]=2;
    				else if(ch=='0')
    					arr[i][j]=1;
    				else
    					arr[i][j]=0; 
    			}
    		}
    		memset(dp,0,sizeof(dp));
    		
    		for(int i=m;i>=1;i--)
    		{
    			//dp[0][i][j] represents left direction
    			//dp[1][i][j] represents right direction
    			for(int j=1;j<=n;j++)
    				if(arr[i][j])
    					dp[0][i][j] = max(dp[0][i][j-1], dp[1][i+1][j]) + arr[i][j] - 1;
    			for(int j=n;j>=1;j--)
    				if(arr[i][j])
    					dp[1][i][j] = max(dp[1][i][j+1], dp[0][i+1][j]) + arr[i][j] - 1;
    		}
    		cout<<dp[1][1][1]<<endl;
    	}
    	return 0;
    }
