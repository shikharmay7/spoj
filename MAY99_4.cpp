SPOJ submission 25599843 (CPP14) plaintext list. Status: AC, problem MAY99_4, contest SPOJ. By shikhar_may7

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
    #define M 10000007
    lli dp[105][105];
    int main()
    {
    	int n,r;
    	cin>>n>>r;
     
    	if(n<r)
    		cout<<"-1"<<endl;
    	else if(n==r)
    		cout<<"1"<<endl;
    	else
    	{
    		for(int i=0;i<=n;i++)
    		{
    			for(int j=0;j<=i;j++)
    			{
    				if(i==0 || j==0)
    					dp[i][j]=1;
    				else
    					dp[i][j] = (dp[i-1][j-1]%M + dp[i-1][j]%M)%M;
    			}
    		}
    		cout<<dp[n-1][r-1]<<endl;
    	}
    	return 0;
    } 
