SPOJ submission 26219370 (CPP14) plaintext list. Status: AC, problem SUBMERGE, contest SPOJ. By shikhar_may7 
    #include<bits/stdc++.h>
    using namespace std;
     
    vector<int>adj[10005];
    int visited[10005], in[100005], low[100005];
    set<int>s;
    int timer;
     
    void dfs(int v, int par)
    {
    	visited[v]=1;
    	in[v]=low[v]=timer++;
    	int children=0;
    	for(int i=0;i<adj[v].size();i++)
    	{
    		int child = adj[v][i];
    		if(child==par)
    			continue;
    		if(visited[child]==1)
    		{
    			low[v] = min(low[v], in[child]);    //back-edge
    		}
    		else
    		{
    			dfs(child, v);
    			low[v] = min(low[v],low[child]);    
    			if(low[child]>=in[v] && par !=-1)     // >= is important and make sure that it is not the root
    				s.insert(v);
    			children++;
    		}
    	}
    	if(par==-1 && children>1)   // if root and children > 1 then its removal can make the graph disconnected
    		s.insert(v);
    }
     
    int main()
    {
    	while(1)
    	{
    		int n,m;
    		cin>>n>>m;
    		if(n==0 && m==0)
    			break;
    		for(int i=1;i<=n;i++)
    			adj[i].clear(), visited[i]=0, in[i]=0, low[i]=0;    //clear globals
    		s.clear();
    		timer=0;
    		while(m--)
    		{
    			int a,b;
    			cin>>a>>b;
    			adj[a].push_back(b);
    			adj[b].push_back(a);
    		}
    		
    		for(int i=1;i<=n;i++)
    		{
    			if(!visited[i])
    				dfs(i,-1);
    		}
    		
    		cout<<s.size()<<endl;
    	}
    	return 0;
    } 
