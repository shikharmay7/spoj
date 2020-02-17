//SPOJ submission 24287807 (CPP14) plaintext list. Status: AC, problem ALTSEQ, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int n;
    	cin>>n;
    	long long int arr[n];
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	int dp[n];
    	for(int i=0;i<n;i++)
    		dp[i]=1;
    	//application of Longest Increasing Subsequence	
    	//bottom up dp
    	
    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<i;j++)
    		{
    			if((abs(arr[j]) < abs(arr[i])) && (arr[j]/abs(arr[j]) != arr[i]/abs(arr[i])))
    			{
    				dp[i] = max(dp[i],1+dp[j]);
    			}
    		}
    	}
    	int res=0;
    	for(int i=0;i<n;i++)
    		res = max(res,dp[i]);
    	cout<<res<<endl;
    	return 0;
    }
