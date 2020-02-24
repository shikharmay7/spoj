SPOJ submission 25448633 (CPP14) plaintext list. Status: AC, problem TWENDS, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
    lli dp[1005][1005];
    lli arr[1005];
     
    lli twends(lli i, lli j, bool turn)
    {
    	if(i>j)
    		return 0;
    	if(dp[i][j]!=-1)
    		return dp[i][j];
    	else
    	{
    		if(turn)
    			dp[i][j] = max(arr[i] + twends(i+1,j,false), arr[j] + twends(i,j-1,false));
    		else
    		{
    			if(arr[i]>=arr[j])
    				dp[i][j] = twends(i+1,j,true);
    			else
    				dp[i][j] = twends(i,j-1,true);
    		}
    	}
    //		return (dp[i][j] = max(arr[i] + min(twends(i+2,j), twends(i+1, j-1)), 
    //							   arr[j] + min(twends(i,j-2), twends(i+1, j-1)) ) );
    	
    	return dp[i][j];
    }
     
    int main()
    {
    	int c=1;
    	while(1)
    	{
    		int n;
    		cin>>n;
    		if(n==0)
    			break;
    		lli sum = 0;	
    		for(int i=0;i<n;i++)
    		{
    			cin>>arr[i];
    			sum+=arr[i];
    		}
    			
    		memset(dp, -1, sizeof(dp));	
    		
    		lli ans = twends(0,n-1,true);
    		lli second = sum - ans;
    //		cout<<"sum"<<sum<<endl;
    //		cout<<"ans"<<ans<<endl;
    //		cout<<"second"<<second<<endl;
    		cout<<"In game "<< c<<", the greedy strategy might lose by as many as "<<abs(ans-second)<<" points."<<endl;
    		//cout<<ans<<endl;
    		c+=1;
    	}
    	return 0;
    }
