SPOJ submission 25909012 (CPP14) plaintext list. Status: AC, problem AAC1, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
     
    int main()
    {
    	lli t;
    	cin>>t;
    	while(t--)
    	{
    		lli n,m;
    		cin>>n>>m;
    		vector<lli>adj[n+1];
    		while(m--)
    		{
    			lli a,b;
    			cin>>a>>b;
    			adj[a].push_back(b);
    			adj[b].push_back(a);
    		}
    		
    		lli * visited = new lli[n+1];
    		for(lli i=0;i<=n;i++)
    			visited[i]=-1;
    		
    		queue<lli>q;	
    		q.push(1);
    		visited[1]=0;
    		while(!q.empty())
    		{
    			lli val = q.front();
    			q.pop();
    			if(val==n)
    				break;
    			
    			for(lli j=0;j<adj[val].size();j++)
    			{
    				if(visited[adj[val][j]]==-1)
    				{
    					q.push(adj[val][j]);
    					visited[adj[val][j]] = 1 + visited[val];
    				}
    			}
    			
    		}
    		cout<<visited[n]<<endl;
    	}
    	return 0;
    } 
