SPOJ submission 25909367 (CPP14) plaintext list. Status: AC, problem CONGRAPH, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
     
    map<lli,lli>mp;
     
    lli root(lli a)
    {
    	while(mp[a]!=a)
    	{
    		mp[a] = mp[mp[a]];	//path compression;
    		a = mp[a];
    	}
    	return a;
    }
     
    int main()
    {
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	lli n,m;
    	cin>>n>>m;
    	lli size[n+1];
    	for(lli i=0;i<=n;i++)
    		size[i]=1;
    	lli cnt=n;	//initially all are disconnected
    	while(m--)
    	{
    		lli a,b,ra,rb;
    		cin>>a>>b;
    		a+=1;	//map[a]=0 when a is 0,this excludes 0 mapped nodes, but we need to consider that
    		b+=1;
    		if(!mp[a])	//to avoid infinite loop in case of a cycle!
    			mp[a]=a;
    		if(!mp[b])
    			mp[b]=b;
    			
    		ra = root(a);
    		rb = root(b);
    		
    		if(ra!=rb)
    		{
    			cnt-=1;
    			if(size[ra]<size[rb]) //balance the tree formed on union!
    			{
    				mp[ra]=mp[rb];
    				size[rb]+=size[ra];
    			}
    			else
    			{
    				mp[rb]=mp[ra];
    				size[ra]+=size[rb];
    			}
    //			mp[ra]=rb;
    		}
    		
    	}
    //	cout<<"MAP"<<endl;
    //	map<lli, lli>:: iterator it;
    //	for(it=mp.begin();it!=mp.end();it++)
    //		cout<<it->first<<" "<<it->second<<endl;
    	cout<<cnt-1<<endl;
    	
    	return 0;	
    }
