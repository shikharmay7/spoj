//SPOJ submission 26205431 (CPP14) plaintext list. Status: AC, problem PPATH, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    bool isPrime(int n)   // checks for primality
    {
    	for(int i=2;i*i<=n;i++)
    	{
    		if(n%i==0)
    			return false;
    	}
    	return true;
    }
    bool edge(int a, int b)   //checks if a and b differ only in one digit
    {
    	int c=0;
    	while(a>0)
    	{
    		if(a%10 != b%10)
    			c++;
    		a/=10;
    		b/=10;
    	}
    	if(c==1)
    		return true;
    	return false;
    }
     
    int main()
    {
    	vector<int>primes;
    	for(int i=1000;i<=9999;i++)   //store all 4 dig prime numbers
    	{
    		if(isPrime(i))
    			primes.push_back(i);
    	}
    	vector<int>adj[100001];   
    	for(int i=0;i<primes.size();i++)    
    	{
    		for(int j=i+1;j<primes.size();j++)
    		{
    			if(edge(primes[i],primes[j]))
    			{
    				adj[primes[i]].push_back(primes[j]);    //build a graph such that the primes that differ only in one digit are connected by an edge.
    				adj[primes[j]].push_back(primes[i]);    // the graph id non-directional 
    			}
    		}
    	}
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		vector<int>dist(100001,-1);
    		int a, b;
    		cin>>a>>b;
    		
    		queue<int>q;
    		q.push(a);
    		dist[a]=0;
    		int flag=0;
    		while(!q.empty())   // perform bfs
    		{
    			int u = q.front();
    			q.pop();
    			if(u == b)
    			{
    				flag=1;
    				break;
    			}
    			for(int i=0;i<adj[u].size();i++)
    			{
    				if(dist[adj[u][i]]==-1)
    				{
    					dist[adj[u][i]] = 1 + dist[u];
    					q.push(adj[u][i]);
    				}
    					
    			}
    		}
    		
    		if(flag==0)           // if b cannot be reached then
    			cout<<"Impossible"<<endl;
    		else
    			cout<<dist[b]<<endl;
    	}
    	return 0;
    } 
