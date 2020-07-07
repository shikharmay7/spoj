//SPOJ submission 26251600 (CPP14) plaintext list. Status: AC, problem MST, contest SPOJ. By shikhar_may7

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
    map<lli,lli>mp;
     
    lli root(lli a)
    {
    	while(a!=mp[a])
    	{
    		mp[a] = mp[mp[a]];    
    		a = mp[a];
    	}
    	return a;
    }
     
    int main()
    {
    	int n,m;
    	cin>>n>>m;
    	priority_queue< pair<lli, pair<lli,lli> >, vector< pair<lli, pair<lli,lli> > >, greater< pair<lli, pair<lli,lli> > > >pq;   //to select lowest weight edge
    	while(m--)
    	{
    		lli a,b,w;
    		cin>>a>>b>>w;
    		pq.push({w,{a,b}});
    	}
    	for(lli i=1;i<=n;i++)
    		mp[i]=i;  // every node is a parent of itself
    	lli s=0;
    	while(!pq.empty())
    	{
    		lli a = pq.top().second.first;
    		lli b = pq.top().second.second;
    		lli w = pq.top().first;
    		pq.pop();
    		
    		if(!mp[a])
    			mp[a]=a;
    		if(!mp[b])
    			mp[b]=b;
    			
    		lli ra = root(a);
    		lli rb = root(b);
    		
    		if(ra!=rb)    // if the nodes are not connected, connect them
    		{ 
    			s+=w;         //add the edge weight to ans;
    			mp[ra]=rb;    //connect them via an edge
    		}
    		else
    			continue;
    	}
    	cout<<s<<endl;
    	return 0;
    } 
