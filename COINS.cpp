SPOJ submission 24234800 (CPP14) plaintext list. Status: AC, problem COINS, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    long long int coins(long long int x,long long int dp[])
    {
    	if(x==1||x==0)
    	{
    		dp[x]=x;
    	}
     
    	if(dp[x]==-1)
    	{
    		dp[x]=max(x,(coins(x/2,dp) + coins(x/3,dp) + coins(x/4,dp)));
    	}
    	return dp[x];
    }
    int main()
    {
    	ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    	long long int x;
    	//long long int dp[1000000001];
    	
    	while(cin>>x)
    	{
    		long long int dp[x+1];
    		// dp[0]=0;
    		// dp[1]=1;
    		for(long long int i=0;i<=x;i++)
    		{
    			dp[i]=-1;	
    		}
    		cout<<coins(x,dp)<<endl;
    	}
    	
    	return 0;
    }
