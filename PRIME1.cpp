SPOJ submission 25768377 (CPP14) plaintext list. Status: AC, problem PRIME1, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
     
    bool isPrime(lli n)
    {
    	if(n<2)
    		return false;
    	bool flag=true;
    	
    	for(lli i=2;i*i<=n;i++)
    	{
    		if(n%i==0)
    		{
    			flag=false;
    			break;
    		}
    	}
    	return flag;
    }
     
    int main()
    {
    //	ios_base::sync_with_stdio(false);
    //	cin.tie(NULL);
    	lli t;
    	cin>>t;
    	while(t--)
    	{
    		lli a, b;
    		cin>>a>>b;
    		
    		for(int i=a;i<=b;i++)
    		{
    			if(isPrime(i))
    				cout<<i<<"\n";
    		}
    		
    	}
    	
    	return 0;
    } 
