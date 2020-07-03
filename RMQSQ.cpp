SPOJ submission 26231331 (CPP14) plaintext list. Status: AC, problem RMQSQ, contest SPOJ. By shikhar_may7 (shikhar), 2020-07-03 13:54:00.

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
     
    lli arr[100001], st[400004];
     
    void buildTree(lli si, lli ss, lli se)
    {
    	if(ss==se)
    	{
    		st[si] = arr[ss];
    		return ;
    	}
    		
    	int mid = (ss+se)/2;
    	buildTree(2*si, ss, mid);
    	buildTree(2*si+1, mid+1, se);
    	
    	st[si] = min(st[2*si], st[2*si+1]);   // min of left child and right child
     
    }
     
    lli query(lli si, lli ss, lli se, lli qs, lli qe)
    {
    	if(se<qs || ss>qe)
    		return INT_MAX;
    	if(ss>=qs && se<=qe)
    		return st[si];
    	
    	lli mid = (ss+se)/2;
    	lli l = query(2*si,ss,mid,qs,qe);
    	lli r = query(2*si+1,mid+1,se,qs,qe);
    	
    	return min(l,r);
    }
     
    int main()
    {
    	lli n;
    	cin>>n;
    	for(lli i=1;i<=n;i++)
    		cin>>arr[i];
    	buildTree(1,1,n);
    	lli q;
    	cin>>q;
    	while(q--)
    	{
    		lli l,r;
    		cin>>l>>r;
    		cout<<query(1,1,n,l+1,r+1)<<endl;
    	}
    	return 0;
    } 
