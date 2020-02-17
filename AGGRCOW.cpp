//SPOJ submission 24651953 (CPP14) plaintext list. Status: AC, problem AGGRCOW, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
     
    int main()
    {
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	cout.tie(NULL);
    	lli t;
    	cin>>t;
    	while(t--)
    	{
    		lli n,c;
    		cin>>n>>c;
    		lli arr[n];
    		for(lli i=0;i<n;i++)
    			cin>>arr[i];
    			
    		sort(arr,arr+n);
    		
    		lli ans, beg=1,end=arr[n-1]-arr[0];
    		
    		while(beg<=end)
    		{
    			lli mid = beg + (end-beg)/2;
    			lli start=arr[0], cnt=1;
    			for(lli i=0;i<n;i++)
    			{
    				if(arr[i]-start>=mid)
    				{
    					cnt+=1;
    					start = arr[i];
    				}
    			}
    			
    			if(cnt<c)
    			{
    				end = mid-1;
    			}
    			else
    			{
    				ans=mid;
    				beg=mid+1;
    			}
    		}
    		cout<<ans<<endl;
    	}
    	return 0;
    } 
