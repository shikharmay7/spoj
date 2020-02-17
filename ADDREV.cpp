//SPOJ submission 24511847 (CPP14) plaintext list. Status: AC, problem ADDREV, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
    lli reverse(lli n)
    {
    	lli s=0;
    	while(n>0)
    	{
    		lli r = n%10;
    		s=s*10+r;
    		n=n/10;
    	}
    	return s;
    }
     
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		lli a, b;
    		cin>>a>>b;
    		lli sum = reverse(a) + reverse(b);
    		cout<<reverse(sum)<<endl;
    	}
    	return 0;
    } 
