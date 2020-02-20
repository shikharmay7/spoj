SPOJ submission 25427485 (CPP14) plaintext list. Status: AC, problem TRT, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
    lli dp[2005][2005];
    lli arr[2005];
    lli treat(int i, int j, int y)
    {
    	if(i>j)
    		return 0;
    	if(dp[i][j]!=-1)
    		return dp[i][j];
    	else
    		return (dp[i][j] = max(treat(i+1,j,y+1) + y*arr[i], treat(i,j-1,y+1) + y*arr[j]));
    }
     
     
    int main()
    {
    	int n;
    	cin>>n;
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	memset(dp, -1,sizeof(dp));
    	lli ans = treat(0,n-1,1);
    	cout<<ans<<endl;
    	return 0;
    } 
