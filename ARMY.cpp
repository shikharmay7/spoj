//SPOJ submission 24511561 (CPP14) plaintext list. Status: AC, problem ARMY, contest SPOJ. By shikhar_may7 (shikhar), 2019-10-02 12:07:34.

    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int ng, nm;
    		priority_queue<int, vector<int>, greater<int> >pqg,pqm; //to use min-heap as priority queue by default uses max-heap
    		cin>>ng>>nm;
    		for(int i=0;i<ng;i++)
    		{
    			int s;
    			cin>>s;
    			pqg.push(s);
    		}
    		for(int i=0;i<nm;i++)
    		{
    			int r;
    			cin>>r;
    			pqm.push(r);
    		}
    		while(!pqg.empty() && !pqm.empty())
    		{
    			int g = pqg.top();
    			int m = pqm.top();
    			
    			if(g<m)
    			{
    				pqg.pop();
    			}
    			if(m<g)
    			{
    				pqm.pop();
    			}
    			if(m==g)
    			{
    				pqm.pop();
    			}
    		}
    		
    		if(pqm.empty())
    		{
    			cout<<"Godzilla"<<endl;
    		}
    		else
    		{
    			cout<<"MechaGodzilla"<<endl;
    		}
    		
    	}
    	return 0;
    } 
