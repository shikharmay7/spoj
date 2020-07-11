//SPOJ submission 26267333 (CPP14) plaintext list. Status: AC, problem CHICAGO, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    	while(1)
    	{
    		int n,m;
    		cin>>n;
    		if(n==0)
    			break;
    		cin>>m;
    		double dist[n+1][n+1];
    		for(int i=0;i<=n;i++)
    			for(int j=0;j<=n;j++)
    				dist[i][j]=0;
    			
    		while(m--)
    		{
    			int a,b;
    			double w;
    			cin>>a>>b>>w;
    			dist[a][b] = w/100;
    			dist[b][a] = w/100;
    		}
    		
    		for(int k=1;k<=n;k++)   //Floyd Warshall
    		{
    			for(int i=1;i<=n;i++)
    			{
    				for(int j=1;j<=n;j++)
    				{
    					if(dist[i][k]!=0 && dist[k][j]!=0)
    						dist[i][j] = max(dist[i][j], dist[i][k]*dist[k][j]);
    				}
    			}
    		}
    		
    		printf("%.6f percent\n", dist[1][n]*100);
    //		cout<<dist[1][n]*100<<" percent "<<endl;
    	}
    	return 0;
    } 
