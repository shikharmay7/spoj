//SPOJ submission 26217175 (CPP14) plaintext list. Status: AC, problem EC_P, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
     
    vector<int>adj[750];
    int visited[750], in[750], low[750];
    vector<pair<int,int> >vp;
    int timer;
    void dfs(int v, int par)
    {
    	visited[v]=1;
    	in[v]=low[v]=timer++;
    	for(int j=0;j<adj[v].size();j++)
    	{
    		int child = adj[v][j];
    		if(child==par)
    			continue;
    		if(visited[child]==1)     //back-edge can never be a bridge!
    			low[v] = min(low[v], in[child]);
    		else
    		{                     //dfs tree-edge/ forward edge
    			dfs(child,v);
    			low[v] = min(low[v], low[child]);
    			if(low[child]>in[v])      // if and only if 
    				vp.push_back({min(v,child), max(v,child)});
    		}
    	}
    }
     
    int main()
    {
    	int T;
    	cin>>T;
    	for(int t=1;t<=T;t++)
    	{
    		int n,m;
    		cin>>n>>m;
    		for(int i=1;i<=n;i++)
    			visited[i]=0, in[i]=0, low[i]=0, adj[i].clear();  // need to clear the global declarations
    		vp.clear();
    		timer=0;
    		while(m--)
    		{
    			int a,b;
    			cin>>a>>b;
    			adj[a].push_back(b);  //build graph
    			adj[b].push_back(a);
    		}
    		
    		for(int i=1;i<=n;i++)
    		{
    			if(!visited[i])
    				dfs(i,-1);
    		}
    		
    		cout<<"Caso #"<<t<<endl;
    		sort(vp.begin(), vp.end());
    		if(vp.size()==0)
    			cout<<"Sin bloqueos"<<endl;
    		else
    		{
    			cout<<vp.size()<<endl;
    			for(int i=0;i<vp.size();i++)
    				cout<<vp[i].first<<" "<<vp[i].second<<endl;			
    		}
     
    	}
    	return 0;
    } 
