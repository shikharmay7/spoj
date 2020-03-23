SPOJ submission 25606189 (CPP14) plaintext list. Status: AC, problem CRSCNTRY, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
     
    int lcs(vector<int>x, vector<int>y, int m, int n)
    {
    	int dp[m+1][n+1];
    	for(int i=0;i<=m;i++)
    	{
    		for(int j=0;j<=n;j++)
    		{
    			if(i==0 || j==0)
    				dp[i][j]=0;
    			else if(x[i-1]==y[j-1])
    				dp[i][j] = 1 + dp[i-1][j-1];
    			else
    				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    		}
    	}
    	return dp[m][n];
    }
     
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		vector<int >v1;
    		while(1)
    		{
    			int a;
    			cin>>a;
    			if(a==0)
    				break;
    			else
    				v1.push_back(a);
    		}
    		int g = 0;
    		while(1)
    		{
    			vector<int >v2;
    			while(1)
    			{
    				int a;
    				cin>>a;
    				if(a==0)
    					break;
    				else
    					v2.push_back(a);
    			}
    			if(v2.size()==0)
    				break;
    			g = max(g, lcs(v1, v2, v1.size(), v2.size()));
    			//cout<<g<<endl;
    		}
    		cout<<g<<endl;
    	}
    	
    	return 0;
    } 
