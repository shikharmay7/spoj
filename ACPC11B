//SPOJ submission 24513933 (CPP14) plaintext list. Status: AC, problem ACPC11B, contest SPOJ. By shikhar_may7

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;  
    //lli closest(lli x, lli y, lli A[],lli B[])  
    //{
    //	sort(A,A+x);
    //	sort(B,B+y);
    //	lli dist = INT_MAX;
    //	lli i=0,j=0;
    //	while(i<x && j<y)
    //	{
    //		if(abs(A[i]-B[j])<dist)
    //			dist = abs(A[i]-B[j]);
    //		
    //		if(A[i]<=B[j])
    //			i+=1;
    //		if(B[j]<A[i])
    //			j+=1;
    //	}
    //	return dist;
    //}
     
    int main()    //the commented function is for the O(n) solution
    {
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	lli t;
    	cin>>t;
    	while(t--)
    	{
    		lli x,y;
    		cin>>x;
    		lli arx[x];
    		for(lli i=0;i<x;i++)
    			cin>>arx[i];
    		cin>>y;
    		lli ary[y];
    		for(lli i=0;i<y;i++)
    			cin>>ary[i];
    		lli dist = INT_MAX;
    		for(int i=0;i<x;i++)
    		{
    			for(int j=0;j<y;j++)
    			{
    				if(abs(arx[i]-ary[j])<dist)
    					dist = abs(arx[i]-ary[j]);
    			}
    		}
    		cout<<dist<<endl;
    	}
    	return 0;                                
    } 
