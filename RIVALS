//SPOJ submission 24558775 (CPP14) plaintext list. Status: AC, problem RIVALS, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
    #define M  1000000007
    #define size 1000001
     
    lli modexp(lli x, lli y, lli p)
    {
    	lli res=1;
    	while(y>0)
    	{
    		if(y&1)
    			res = ((res%p)*(x%p))%p;
    		y=y>>1;
    		x=((x%p)*(x%p))%p;
    	}
    	return res;
    }
     
     
    int main()
    {
    	lli *fact = new lli[size*2];
    	lli temp;
    	
    	fact[0]=1;
    	fact[1]=1;
    	
    	for(lli i=2;i<size*2;i++)
    	{
    		temp = fact[i-1]*i;
    		if(temp>M)
    			temp=temp%M;
    		fact[i]=temp;
    	}
    	
    	lli *deno = new lli[size];
    	
    	for(lli i=0;i<=size;i++)
    	{
    		deno[i] = modexp(fact[i],M-2,M);
    	}
    	lli t;
    	cin>>t;
    	while(t--)
    	{
    		lli x,y;
    		cin>>x>>y;
    		lli ans= fact[x+y]*deno[x];
    		if(ans>M)
    			ans=ans%M;
    		ans*=deno[y];
    		if(ans>M)
    			ans=ans%M;
    		cout<<ans<<endl;
    	}
    	return 0;
    } 
