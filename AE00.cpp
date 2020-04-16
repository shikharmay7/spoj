SPOJ submission 25779205 (CPP) plaintext list. Status: AC, problem AE00, contest SPOJ. By shikhar_may7

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int  lli;
     
    int main()
    {
    	int n;
    	cin>>n;
    	lli cnt=0;
    	for(lli i=1;i<=n;i++)
    	{
    		lli val = i;
    		set<lli>s;
    		map<lli,lli>mp;
    		
    		while(val%2==0)
    		{
    			s.insert(2);
    			mp[2]+=1;
    			val/=2;
    		}
    		for(lli i=3;i<=sqrt(val);i+=2)
    		{
    			while(val%i==0)
    			{
    				s.insert(i);
    				mp[i]+=1;
    				val/=i;
    			}
    		}
    		if(val>2)
    		{
    			s.insert(val);
    			mp[val]+=1;
    		}
    		
    		set<lli>:: iterator it;
    		lli f = 1;
    		for(it=s.begin(); it!=s.end(); it++)
    		{
    			f = f*(mp[*it]+1);
    		}
    		
    		if(f%2==0)
    			cnt+=f/2;
    		else
    			cnt+=(f+1)/2;
    	}
    	cout<<cnt<<endl;
    	
    	return 0;
    } 
