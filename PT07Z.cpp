SPOJ submission 25889332 (CPP14) plaintext list. Status: AC, problem PT07Z, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
     
    pair<lli, lli> bfs(lli src, vector<lli>adj[], lli n)
    {
    	lli dis[n+1];
    	for(lli i=0;i<=n;i++)
    		dis[i]=-1;
    	
    	queue<lli>q;
    	q.push(src);
    	dis[src]=0;
    	
    	while(!q.empty())
    	{
    		lli v = q.front();
    		q.pop();
    		
    		for(lli j=0;j<adj[v].size();j++)
    		{
    			if(dis[adj[v][j]]==-1)
    			{
    				q.push(adj[v][j]);
    				dis[adj[v][j]]=dis[v]+1;
    			}
    		}
    	}
    	
    	lli max_pos, max_dis=0;
    	
    	for(lli i=1;i<=n;i++)
    	{
    		if(dis[i]>max_dis)
    		{
    			max_dis = dis[i];
    			max_pos =  i;
    		}
    	}
    	
    	return make_pair(max_pos, max_dis);
    }
     
     
    int main()
    {
    	lli n;
    	cin>>n;
    	vector<lli>adj[n+1];
    	lli v=n;
    	n-=1;
    	while(n--)
    	{
    		lli a,b;
    		cin>>a>>b;
    		adj[a].push_back(b);
    		adj[b].push_back(a);
    	}
    	
    	pair<lli, lli> p1,p2;
    	p1 = bfs(1, adj, v);
    //	cout<<"p1\t"<<p1.first<<" "<<p1.second<<endl;
    	p2 = bfs(p1.first, adj, v);
    	
    	cout<<p2.second<<endl;
    	
    	return 0;
    }
