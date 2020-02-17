    //FOXLINGS spoj
    #include<bits/stdc++.h>
    using namespace std;
    map< long long int, long long int >foxling;     //map is used since no of foxlings can be upto 10^9 but the no of relations can be 10^5 at max which can be stored
     
    long long int root(long long int a)     
    {
    	while(a!=foxling[a])
    	{
    		foxling[a]=foxling[foxling[a]];     //path compression
    		a = foxling[a];
    	}
    	return a;
    }
    int main()
    {
    	ios_base::sync_with_stdio(false);   //faster io
    	cin.tie(NULL);
    	long long int n,m,count;
    	
    	cin>>n>>m;
    	count = n;
    	while(m--)
    	{
    		long long int a,b,ra,rb;
    		cin>>a>>b;
    		if(!foxling[a])
    			foxling[a]=a;
    		if(!foxling[b])
    			foxling[b]=b;
    		
    		ra = root(a);
    		rb = root(b);	
    		if(ra!=rb)
    		{
    			count--;            //for each union, no of connected components decreases by 1
    			foxling[ra]=rb;     //can be further optimised with weighted union
    		}
    	//	cout<<count<<endl;
    	}
    	cout<<count<<endl;
    	return 0;
    } 
