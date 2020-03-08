SPOJ submission 25513550 (CPP14) plaintext list. Status: AC, problem ELIS, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	int dp[n];
    //	memset(dp,1,sizeof(dp));
    	for(int i=0;i<n;i++)
    		dp[i]=1;
    	for(int i=1;i<n;i++)	
    	{
    		for(int j=0;j<i;j++)
    		{
    			if(arr[i]>arr[j])
    				dp[i] = max(dp[i],1 + dp[j]);
    		}
    	}
    	
    	int mx=dp[0];
    	for(int i=0;i<n;i++)
    		mx = max(mx,dp[i]);
    	cout<<mx<<endl;
    	return 0;
    } 
