SPOJ submission 25573828 (CPP14) plaintext list. Status: AC, problem NY10E, contest SPOJ. By shikhar_may7

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
    int main()
    {
    	lli dp[65][10];
    	for(int i=0;i<65;i++)
    	{
    		for(int j=0;j<10;j++)
    		{
    			if(i==0 || j==0)
    				dp[i][j]=1;
    			else 
    				dp[i][j] = dp[i][j-1] + dp[i-1][j];
    		}
    	}
    	
    //	for(int i=0;i<65;i++)
    //	{
    //		for(int j=0;j<10;j++)
    //		{
    //			cout<<dp[i][j]<<" ";
    //		}
    //		cout<<endl;
    //	}
    	
    	
    	int p;
    	cin>>p;
    	//int c=1;
    	while(p--)
    	{
    		int a, b;
    		cin>>a>>b;
    		cout<<a<<" "<<dp[b][9]<<endl;
    	}
    	return 0;
    } 
