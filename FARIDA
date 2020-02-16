SPOJ submission 25043997 (CPP14) plaintext list. Status: AC, problem FARIDA, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    //typedef long long int lli;
    int main()
    {
    	int t;
    	scanf("%d",&t);
    	for(int c=1;c<=t;c++)
    	{
    		int n;
    		scanf("%d",&n);
    		long long int arr[n];
    		for(int i=0;i<n;i++)
    			scanf("%lld",&arr[i]);
    			
    		if(n==0)
    		{
    			printf("Case %d: %lld\n", c, 0);
    		}
    		else if(n==1)
    		{
    			printf("Case %d: %lld\n", c, arr[0]);
    		}
    		else if(n==2)
    		{
    			printf("Case %d: %lld\n", c, max(arr[0],arr[1]));
    		}
    		else
    		{
    			long long int dp[n];
    			dp[0]=arr[0];
    			dp[1]=max(arr[1],arr[0]);
    		
    			for(int i=2;i<n;i++)
    				dp[i] = max(dp[i-2]+arr[i],dp[i-1]);
     
    			printf("Case %d: %lld\n", c, dp[n-1]);
    	
    		}
     
    		
    	}
    	return 0;
    } 
