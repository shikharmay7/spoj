//SPOJ submission 26251529 (CPP14) plaintext list. Status: AC, problem RPLA, contest SPOJ. By shikhar_may7 

        #include<bits/stdc++.h>
        using namespace std;
         
        vector<int>adj[1005];
        int visited[1005], in[1005], post[1005];
        vector<int>ans;
         
        bool kahns(int n)   // kahn's Indegree algorithm
        {
        	priority_queue<int,vector<int>, greater<int> >pq; // to maintain lexical order
        	for(int i=0;i<n;i++)
        	{
        		if(in[i]==0)
        			pq.push(i), post[i]=1;
        	}
        	while(!pq.empty())
        	{
        		int u = pq.top();
        		ans.push_back(u);
        		pq.pop();
        		for(int i=0;i<adj[u].size();i++)
        		{
        			int v = adj[u][i];
        			in[v]--;
        			post[v] = post[u]+1;
        			if(in[v]==0)
        				pq.push(v);
        		}
        	}
        	return ans.size()==n;   //an optimal way to check for cycle too in the same fun()
        }
         
        int main()
        {
        	int T;
        	cin>>T;
        	for(int t=1;t<=T;t++)
        	{
        		int n,m;
        		cin>>n>>m;
        		for(int i=0;i<n;i++)
        			adj[i].clear(), in[i]=0, post[i]=0;   // clear globals
        		ans.clear();
        		while(m--)
        		{
        			int a,b;
        			cin>>a>>b;
        			adj[b].push_back(a);
        			in[a]++;
        		}
        		
        		cout<<"Scenario #"<<t<<": "<<endl;
        		bool flag=true;
        		flag=kahns(n);
        		
        		if(flag)
        		{
        			vector<pair<int,int> >temp;
        			for(int i=0;i<ans.size();i++)
        				temp.push_back({post[ans[i]],ans[i]});
        			sort(temp.begin(), temp.end());
        			for(int i=0;i<temp.size();i++)
        				cout<<temp[i].first<<" "<<temp[i].second<<endl;
    					
        		}
        	
        	}
        	return 0;
        }  
