SPOJ submission 25513626 (CPP14) plaintext list. Status: AC, problem EDIST, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		string X,Y;
    		cin>>X>>Y;
    		int lx = X.size();
    		int ly = Y.size();
    		int dp[lx+1][ly+1];
    		for(int i=0;i<=lx;i++)
    		{
    			for(int j=0;j<=ly;j++)
    			{
    				if(i==0)
    					dp[i][j]=j;
    				else if(j==0)
    					dp[i][j]=i;
    				else if(X[i-1]==Y[j-1])
    					dp[i][j] = dp[i-1][j-1];
    				else
    					dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]))+1;
    			}
    		}
    //		for(int i=0;i<=lx;i++)
    //		{
    //			for(int j=0;j<=ly;j++)
    //				cout<<dp[i][j]<<" ";
    //			cout<<endl;
    //		}
    		cout<<dp[lx][ly]<<endl;
    	}
    	return 0;
    } 
