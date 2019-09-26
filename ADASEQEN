    #include<bits/stdc++.h>
    using namespace std;
    long long int maxlcs(string X, string Y, int arr[], int m, int n)
    {
    	long long int dp[m+1][n+1];
    	for(int i=0;i<=m;i++)
    	{
    		for(int j=0;j<=n;j++)
    		{
    			if(i==0||j==0)
    			{
    				dp[i][j]=0;
    			}
    			else if(X[i-1]==Y[j-1])
    			{
    				char c = X[i-1];
    				int ind = c-97;
    				dp[i][j] = arr[ind] + dp[i-1][j-1];
    			}
    			else
    			{
    				dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
    			}
    		}
    	}
    	
    	long long int ans = 0;
    	for(int i=0;i<=m;i++)
    	{
    		for(int j=0;j<=n;j++)
    		{
    		//	cout<<dp[i][j]<<" ";
    			ans = max(ans,dp[i][j]);
    		}
    		//cout<<endl;
    	}
    	return ans;
    }
     
    int main()
    {
    	int n,m;
    	cin>>n>>m;
    	int arr[26];
    	for(int i=0;i<26;i++)
    		cin>>arr[i];
    	// vector<pair<char,int> >v;
    	// for(int i=0;i<26;i++)
    	// 	v.push_back(make_pair())
    	
    	
    	string s1,s2;
    	cin>>s1;
    	cin>>s2;
    	
    	long long int res = maxlcs(s1,s2,arr,n,m);
    	cout<<res<<endl;
    	return 0;
    } 
