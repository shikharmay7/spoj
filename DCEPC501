//SPOJ submission 25414123 (CPP14) plaintext list. Status: AC, problem DCEPC501, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		lli n;
    		cin>>n;
    		lli arr[n];
    		for(lli i=0;i<n;i++)
    			cin>>arr[i];
    		lli dp[n+5];
    		memset(dp,0,sizeof(dp));
    		dp[n-1] = arr[n-1];
    		dp[n-2] = dp[n-1]+arr[n-2];
    		dp[n-3] = dp[n-2]+arr[n-3];
    		for(lli i=n-4;i>=0;i--)
    			dp[i] = max(arr[i]+dp[i+2], max(arr[i]+arr[i+1]+dp[i+4], arr[i]+arr[i+1]+arr[i+2]+dp[i+6]));
    			
    		cout<<dp[0]<<endl;	
    	}
    	return 0;
    }
