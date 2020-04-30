SPOJ submission 25890476 (CPP14) plaintext list. Status: AC, problem MICEMAZE, contest SPOJ. By shikhar_may7

    #include<bits/stdc++.h>
    using namespace std;
    typedef pair<int,int> ipair;
     
    int dijkstra(int src, vector<ipair>adj[], int exit, int n)
    {
    	bool* visited = new bool[n+1];
    	int *dist = new int[n+1];
    	for(int i=0;i<=n;i++)
    		dist[i]=INT_MAX;
    		
    	for(int i=0;i<=n;i++)
    		visited[i]=false;
    			
    	priority_queue<ipair, vector<ipair>, greater<ipair> >pq;
    	pq.push(make_pair(0,src));
    	dist[src] = 0;
    	visited[src] = true;
    	
    	while(!pq.empty())
    	{
    		int u = pq.top().second;
    		pq.pop();
    		visited[u]=true;
    		
    		for(int j=0;j<adj[u].size();j++)
    		{
    			int v = adj[u][j].second;
    			int w = adj[u][j].first;
    			if(!visited[v] && dist[v]> dist[u] + w)
    			{
    				dist[v] = dist[u] + w;
    				pq.push(make_pair(dist[v],v));
    			}
    		}
    	}
    	
    	if(dist[exit]==INT_MAX)
    		return -1;
    	return dist[exit];	
    }
     
    int main()
    {
    	int n,e,t;
    	cin>>n>>e>>t;
    	int m;
    	cin>>m;
    	vector<ipair>adj[n+1];
    	while(m--)
    	{
    		int a,b,w;
    		cin>>a>>b>>w;
    		adj[a].push_back(make_pair(w,b));
    	}
    	
    	int c=0;
    	for(int i=1;i<=n;i++)
    	{
    		int val = dijkstra(i, adj, e, n);
    		if(val!=-1 && val<=t)
    			c+=1;
    	}
    	cout<<c<<endl;
    	
    	return 0;
    } 
