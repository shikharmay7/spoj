SPOJ submission 25855340 (CPP14) plaintext list. Status: AC, problem PT07Y, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
     
    bool checkCycle(int i, vector<int>adj[], bool visited[], int parent)
    {
    	visited[i]=true;
    	
    	for(int j=0;j<adj[i].size();j++)
    	{
    		if(!visited[adj[i][j]])
    		{
    			if(checkCycle(adj[i][j], adj, visited, i))
    				return true;
    		}
    		else if(adj[i][j]!=parent)
    			return true;
    	}
    	return false;
    }
     
     
    bool isCyclic(vector<int>adj[], int v)
    {
    	bool *visited = new bool[v];
    	for(int i=0;i<v;i++)
    		visited[i]=false;
    	
    	for(int i=0;i<v;i++)
    	{
    		if(!visited[i])
    		{
    			if(checkCycle(i,adj,visited,-1))
    				return true;
    		}
    	}
    	return false;
    }
     
    int main()
    {
    	int v,e;
    	cin>>v>>e;
    	vector<int>adj[v+1];
    	int E = e;
    	while(E--)
    	{
    		int a,b;
    		cin>>a>>b;
    		adj[a].push_back(b);
    		adj[b].push_back(a);
    	}
    	
    	bool flag = isCyclic(adj,v);
    	if(flag==1)
    		cout<<"NO"<<endl;
    	else
    		if(v==e+1)
    			cout<<"YES"<<endl;
    		else
    			cout<<"NO"<<endl;
    	return 0;
    } 
