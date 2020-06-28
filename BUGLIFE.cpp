//SPOJ submission 26209620 (CPP14) plaintext list. Status: AC, problem BUGLIFE, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
     
    int visited[2005], color[2005];   
    vector<int>adj[2005];
     
    bool dfs(int i, int c)        // checks for bipartite graph by graph coloring method
    {
    	visited[i]=1;
    	color[i] = c;
    	for(int j=0;j<adj[i].size();j++)
    	{
    		if(visited[adj[i][j]]==0)
    		{
    			if(dfs(adj[i][j],c^1)==false)     // if not visited then color the adjecent node with other color and then check 
    				return false;
    		}
    		else
    		{
    			if(color[adj[i][j]]==c)     // if visited, then make sure no adjecent colors are same
    				return false;
    		}
    	}
    	return true;
    }
     
    int main()
    {
    	int T;
    	cin>>T;
    	for(int t=1;t<=T;t++)
    	{
    		int n,e;
    		cin>>n>>e;
    		for(int i=1;i<=n;i++)
    			adj[i].clear(), visited[i]=0;   // clear as both are declared globally
    		while(e--)
    		{
    			int a,b;
    			cin>>a>>b;
    			adj[a].push_back(b);
    			adj[b].push_back(a);
    		}
    		cout<<"Scenario #"<<t<<":"<<endl;
    		
    		bool flag=true;
    		for(int i=1;i<=n;i++)   // check for every component bipartiteness
    		{
    			if(visited[i]==0)
    			{
    				bool res = dfs(i,0);
    				if(res==false)
    					flag=false;
    			}
    		}
    		if(flag)
    			cout<<"No suspicious bugs found!"<<endl;
    		else
    			cout<<"Suspicious bugs found!"<<endl;
    		
    	}
    	return 0;
    } 
