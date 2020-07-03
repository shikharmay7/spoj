//SPOJ submission 26231601 (CPP14) plaintext list. Status: AC, problem LCA, contest SPOJ. By shikhar_may7 (shikhar)

    #include<bits/stdc++.h>
    using namespace std;
     
    vector<int>adj[1001];
    int maxN = 10;  // 2^10 = 1024
    int level[1001];
    int LCA[1001][10];
     
    void dfs(int node, int lvl, int par)  // finds the level and the 1st parent of every node.
    {
    	level[node] = lvl;
    	LCA[node][0] = par;
    	for(int i=0;i<adj[node].size();i++)
    	{
    		int child = adj[node][i];
    		if(child!=par)		//dfs without using visited array!
    			dfs(child, lvl+1, node);
    	}
    }
     
    void init(int n)
    {
    	dfs(1,0,-1);  // fills the 1st column of LCA    
    	//construct the LCA table;
    	for(int i=1;i<maxN;i++)
    	{
    		for(int j=1;j<=n;j++)
    		{
    			if(LCA[j][i-1]!=-1)
    			{
    				int par = LCA[j][i-1];
    				LCA[j][i] = LCA[par][i-1];
    			}
    		}
    	}
    }
     
    void swap(int &a, int &b)
    {
    	int c = a;
    	a = b;
    	b = c;
    }
     
    int getLCA(int a, int b)
    {
    	if(level[b]<level[a]) // as the algo is written assuming lvl(b)>lvl(a)!
    		swap(a,b);
    	
    	int d = level[b]-level[a];  // difference in height
    	while(d>0)
    	{
    		int i = log2(d);  
    		b = LCA[b][i];  //shifting b up in O(log(d))
    		d-= (1<<i);
    	};
    	if(a==b)    // case when b is descendent of a!
    		return a;   
    	
    	for(int i=maxN-1;i>=0;i--)
    	{
    		if(LCA[a][i]!=-1 && (LCA[a][i]!=LCA[b][i])) //make sure to check that their 2^ith parents are not equal else LCA may be overlooked
    		{
    			a = LCA[a][i];
    			b = LCA[b][i];
    		}
    	}
    	return LCA[a][0]; //return 1st parent of a or b this will be their LCA!
    }
     
    int main()
    {
    	int T;
    	cin>>T;
    	for(int t=1;t<=T;t++)
    	{
    		int n;
    		cin>>n;
    		for(int i=1;i<=n;i++)
    			adj[i].clear(), level[i]=0; //clearing globals
    			
    		for(int i=1;i<=n;i++)
    			for(int j=0;j<maxN;j++)   //assigning LCAs to be -1
    				LCA[i][j]=-1;
    				
    		for(int i=1;i<=n;i++)
    		{
    			int m;
    			cin>>m;
    			while(m--)
    			{
    				int j;
    				cin>>j;
    				adj[i].push_back(j);
    				adj[j].push_back(i);
    			}
    		}
    		
    		init(n);
    		
    		cout<<"Case "<<t<<":"<<endl;
    		int q;
    		cin>>q;
    		while(q--)
    		{
    			int a,b;
    			cin>>a>>b;
    			cout<<getLCA(a,b)<<endl;
    		}
    	}
    	return 0;
    } 
