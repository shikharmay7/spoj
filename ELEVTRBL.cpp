SPOJ submission 25890747 (CPP14) plaintext list. Status: AC, problem ELEVTRBL, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
     
     
    int main()
    {
    	int f,s,g,u,d;
    	cin>>f>>s>>g>>u>>d; 
    	//floors>>start>>goal>>up>>down;
    	
    	int dist[f+1];
    	for(int i=0;i<=f;i++)
    		dist[i]=-1;
    	
    	queue<int>q;
    	q.push(s);
    	dist[s]=0;
    	
    	while(!q.empty())
    	{
    		int val = q.front();
    		if(val==g)
    			break;
    		q.pop();
    		
    		if(val+u<=f && dist[val+u]==-1)
    		{
    			q.push(val+u);
    			dist[val+u] = dist[val]+1;
    		}
    		if(val-d>=0 && dist[val-d]==-1)
    		{
    			q.push(val-d);
    			dist[val-d] = dist[val]+1;
    		}
    	}
    	
    	if(dist[g]==-1)
    		cout<<"use the stairs"<<endl;
    	else
    		cout<<dist[g]<<endl;
    	
    	return 0;
    } 
