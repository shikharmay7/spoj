SPOJ submission 25909504 (CPP14) plaintext list. Status: AC, problem HIGHWAYS, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
    typedef pair<lli,lli> ipair;
     
    int main()
    {
    	lli t;
    	cin>>t;
    	while(t--)
    	{
    		lli n, m, s, e;
    		cin>>n>>m>>s>>e;
    		vector<ipair>adj[n+1];
    		while(m--)
    		{
    			lli a,b,w;
    			cin>>a>>b>>w;
    			adj[a].push_back(make_pair(w,b));
    			adj[b].push_back(make_pair(w,a));
    		}
    		
    		bool* visited = new bool[n+1];
    		lli * dist = new lli[n+1];
    		
    		for(lli i=0;i<=n;i++)
    		{
    			visited[i]=false;
    			dist[i]=INT_MAX;
    		}
    		
    		priority_queue<ipair, vector<ipair>, greater<ipair> >pq;
    		pq.push(make_pair(0,s));
    		dist[s]=0;
    		visited[s]=true;
    		while(!pq.empty())
    		{
    			lli u = pq.top().second;
    			pq.pop();
    			visited[u]=true;
    			
    			for(lli i=0;i<adj[u].size();i++)
    			{
    				lli v = adj[u][i].second;
    				lli w = adj[u][i].first;
    				
    				if(!visited[v] && dist[v]>dist[u]+w)
    				{
    					dist[v]=dist[u]+w;
    					pq.push(make_pair(dist[v],v));
    				}
    			}
    			
    		}
    		
    		if(dist[e]==INT_MAX)
    			cout<<"NONE"<<endl;
    		else
    			cout<<dist[e]<<endl;
    	}
    	
    	return 0;
    } 
