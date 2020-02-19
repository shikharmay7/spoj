SPOJ submission 25423505 (CPP14) plaintext list. Status: AC, problem ACODE, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
     
    int main()
    {
    	while(1)
    	{
    		string inp;
    		cin>>inp;
    		if(inp=="0")
    			break;
    		
    		lli len = inp.size();
    		lli dp[len+1];
    		memset(dp, 0, sizeof(dp));
    		dp[0]=1;
    		//int val = (int(inp[0])-48)*10 + int(inp[1]-48);
   			dp[1]=1;
    		for(lli i=2;i<=len;i++)
    		{
    			if(int(inp[i-1])-48 != 0)
    				dp[i]=dp[i-1];
    			int x = (int(inp[i-2])-48)*10 + int(inp[i-1]-48);
    			if(x>=10 && x<=26 && (int(inp[i-2])-48 != 0))
    				dp[i]+=dp[i-2];
    		}
    		cout<<dp[len]<<endl;
    	}
    	return 0;
    } 
