SPOJ submission 26374789 (CPP14) plaintext list. Status: AC, problem SOCNETC, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
     
    int arr[100001];
    int size[100001];
     
    int root(int a)
    {
    	while(a!=arr[a])
    	{
    		arr[a]=arr[arr[a]];
    		a = arr[a];
    	}
    	return a;
    }
     
    int main()
    {
    	int n,m;
    	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    	#endif
    	
    	cin>>n>>m;
    	for(int i=1;i<=n;i++)
    		arr[i]=i, size[i]=1;
     
    	int q;
    	cin>>q;
    	while(q--)
    	{
    		char c;
    		cin>>c;
    		if(c=='S')
    		{
    			int a;
    			cin>>a;
    			int ra = root(a);
    			cout<<size[ra]<<endl;
    		}
    		else if(c=='E')
    		{
    			int a,b;
    			cin>>a>>b;
     
    			int ra = root(a);
    			int rb = root(b);
    			if(ra==rb)
    				cout<<"Yes"<<endl;
    			else
    				cout<<"No"<<endl;
    		}
    		else if(c=='A')
    		{
    			int a,b;
    			cin>>a>>b;
    			int ra=root(a);
    			int rb=root(b);
    			if(ra!=rb && size[ra]+size[rb]<=m)
    			{
    				arr[ra]=rb;
    				size[rb]+=size[ra];
    			}
    		}
     
    	}
    	return 0;
    } 
