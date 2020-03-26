SPOJ submission 25628787 (CPP14) plaintext list. Status: AC, problem MCOINS, contest SPOJ. By shikhar_may7

    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int k,l,m;
    	cin>>k>>l>>m;
    	int arr[m];
    	int g=0;
    	for(int i=0;i<m;i++)
    	{
    		cin>>arr[i];
    		g = max(g, arr[i]);
    	}
    	
    	int dp[g+1];
    	for(int i=0;i<=g;i++)
    		dp[i]=-1;
    	
    	dp[0]=0;
    	dp[k]=1;
    	dp[l]=1;
    	for(int i=1;i<k;i++)
    	{
    		if(dp[i-1]==0)
    		{
    			if(dp[i]==-1)
    				dp[i]=1;			
    		}
     
    		else
    		{
    			if(dp[i]==-1)
    				dp[i]=0;			
    		}
     
    	}
    	for(int i=k+1;i<l;i++)
    	{
    		if(dp[i-1]==0 || dp[i-k]==0 )
    		{
    			if(dp[i]==-1)
    				dp[i]=1;
    		}
    		else
    		{
    			if(dp[i]==-1)
    				dp[i]=0;
    		}
    				
    	}
    	for(int i=l;i<=g;i++)
    	{
    		if(dp[i-1]==0 || dp[i-l]==0 || dp[i-k]==0)
    		{
    			if(dp[i]==-1)
    				dp[i]=1;
    		}
    		else
    		{
    			if(dp[i]==-1)
    				dp[i]=0;
    		}
    	}
    	
    	for(int i=0;i<m;i++)
    	{
    		if(dp[arr[i]]==1)
    			cout<<"A";
    		else
    			cout<<"B";
    	}
    	
    //	for(int i=0;i<10;i++)
    //		cout<<dp[i]<<" ";
    	
    	return 0;
    }
