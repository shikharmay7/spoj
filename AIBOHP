//SPOJ submission 24270747 (CPP14) plaintext list. Status: AC, problem AIBOHP, contest SPOJ. By shikhar_may7

    #include<bits/stdc++.h>
    using namespace std;
    int lcs(string X,string Y, int m, int n)
    {
    	int dp[m+1][n+1];
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
    				dp[i][j] = 1 + dp[i-1][j-1];
    			}
    			else
    			{
    				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    			}	
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
    		string str;
    		int n = str.length();
    		string revstr="";
    		cin>>str;
    //		cout<<"orignal "<<str<<endl;
    		for(int i=0;i<str.length();i++)
    			revstr+=str[str.length()-i-1];
    		int l = str.length();
    		int len = lcs(str,revstr,l,l);
    		cout<<str.length()-len<<endl;
    		//cout<<len<<endl;
    	}
    	return 0;
    }
